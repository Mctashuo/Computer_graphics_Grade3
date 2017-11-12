// Fill.h: interface for the CFill class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FILL_H__DA7F801E_7485_4AA5_99FD_79111E70A6DB__INCLUDED_)
#define AFX_FILL_H__DA7F801E_7485_4AA5_99FD_79111E70A6DB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "AET.h"
#include "Px.h"
#include "Bucket.h"
class CFill  
{
public:
	CFill();
	virtual ~CFill();

	void SetPoint(CPx *,int);
	void CreateBucket();
	void CreateEdge();
	void AddEt(CAET *NewEdge);
	void EtOrder();
	void Gouraud(CDC *pDC);
public:
	
	int PNum;	//�������
	CPx *P;		//������������
	CAET *HeadE,*CurrentE,*Edge;	//��Ч�߱�
	CBucket *HeadB,*CurrentB;	//Ͱ��

};

#endif // !defined(AFX_FILL_H__DA7F801E_7485_4AA5_99FD_79111E70A6DB__INCLUDED_)
