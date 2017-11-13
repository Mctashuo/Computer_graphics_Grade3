// Perspective.h: interface for the CPerspective class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
#define AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "Model.h"

class CPerspective : public CModel 
{

public:
	CP3 P[4];	//���
	CFace F[4];	//���
	double R,The,Phi,d;	//�����꣬d�Ӿ�
	double k[9];	//������
	CP3 ViewPoint;	//�ӵ�������
	CPoint ScreenPoint;	//��Ļ����ϵ
public:
	CPerspective();
	virtual ~CPerspective();

	void ReadVertex();	//��ȡ���
	
	void ReadFace();	//��ȡ���
	
	void initPerPar();	//��ʼ��͸�Ӳ���
	void Perspective(CP3 );		//͸��ͶӰ
	void init();

//	void DrawBuffer(CDC *,CRect);

	void DrawFace(CDC *pDC,int NumberFace);

	void DrawObject(CDC *pDC);

	void Play(CDC *pDC,CRect);
};

#endif // !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
