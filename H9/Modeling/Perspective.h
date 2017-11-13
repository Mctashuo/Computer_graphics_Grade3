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
	CP3 P[4];	//点表
	CFace F[4];	//面表
	double R,The,Phi,d;	//球坐标，d视距
	double k[9];	//运算量
	CP3 ViewPoint;	//视点球坐标
	CPoint ScreenPoint;	//屏幕坐标系
public:
	CPerspective();
	virtual ~CPerspective();

	void ReadVertex();	//读取点表
	
	void ReadFace();	//读取面表
	
	void initPerPar();	//初始化透视参数
	void Perspective(CP3 );		//透视投影
	void init();

//	void DrawBuffer(CDC *,CRect);

	void DrawFace(CDC *pDC,int NumberFace);

	void DrawObject(CDC *pDC);

	void Play(CDC *pDC,CRect);
};

#endif // !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
