// Koch.h: interface for the CKoch class.
//
//////////////////////////////////////////////////////////////////////
#include "P1.h"
#if !defined(AFX_KOCH_H__BC7E9863_268F_435E_9C1A_06F2E0DD6214__INCLUDED_)
#define AFX_KOCH_H__BC7E9863_268F_435E_9C1A_06F2E0DD6214__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CKoch  
{

protected:
	int n,alpha; //�ݹ���ȣ�ת��
	CP1 a,b,position;	//��㣬�յ㣬λ��
	double distance;  //ֱ�߳���

public:
	void KOCH1(CDC * pDC,int n);
	void KOCH2(CDC * pDC,int n);
	void KOCH3(CDC * pDC,int n);
	void DrawKoch(CDC *pDC);

	CKoch();
	virtual ~CKoch();

};

#endif // !defined(AFX_KOCH_H__BC7E9863_268F_435E_9C1A_06F2E0DD6214__INCLUDED_)
