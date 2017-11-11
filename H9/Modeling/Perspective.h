// Perspective.h: interface for the CPerspective class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
#define AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "P3.h"
#include "Face.h"
#include "P2.h"


class CPerspective  
{

public:
	CP3 P[4];	//点表
	CFace F[4];	//面表
	double R,The,Phi,d;	//球坐标，d视距
	double k[9];	//运算量
	CP3 ViewPoint;	//视点球坐标
	CP2 ScreenPoint;	//屏幕坐标系
public:
	CPerspective();
	virtual ~CPerspective();

	void ReadVertex();	//读取点表
	
	void ReadFace();
	
	void initPerPar();	//初始化透视参数
	void Perspective(CP3 );		//透视投影
	void init();

};

#endif // !defined(AFX_PERSPECTIVE_H__BF77B1D3_1B47_442A_98DA_61B81092901C__INCLUDED_)
