// H3.h: interface for the CH3 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H3_H__F1CCDA1A_A690_40D5_9543_8AE2BE6A5352__INCLUDED_)
#define AFX_H3_H__F1CCDA1A_A690_40D5_9543_8AE2BE6A5352__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P2.h"
#include "P3.h"
#include "Face.h"
class CH3  
{
public:
	CH3();
	virtual ~CH3();
	CP3 P3[8];//3维变换点
	CP2 P2;//2维变换点
	double afa,beta;//α和β
	CFace  F[6];//面表
	CRect Rect;


public:
	void ReadPoint();//点表
	void ReadFace();//面表
	void DrawCube(CDC *,CRect);//绘制立方体
	void init(double,double,CDC *,CRect);
	CP2 Project(CP3 P0);//斜平行投影
	void Line(CDC *,int,CP2 p[]);//绘制直线
};

#endif // !defined(AFX_H3_H__F1CCDA1A_A690_40D5_9543_8AE2BE6A5352__INCLUDED_)
