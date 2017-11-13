// H4.h: interface for the CH4 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H4_H__9D7633F2_6309_4A43_A8BC_35DAD551AA72__INCLUDED_)
#define AFX_H4_H__9D7633F2_6309_4A43_A8BC_35DAD551AA72__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Face.h"
class CH4  
{
public:
	CH4();
	virtual ~CH4();
	void ReadPoint();//读入顶点函数
	void ReadFace();//读入面函数
	void DrawPolygon(CDC *pDC,CRect Rect);//绘制多面体函数
	void Project(const double P3[][4],double P2[][3],const int);//斜等侧投影变换
	void MultiMatrix(double P[][4],int T[][4]);//矩阵相乘
	void Line(CDC *,CPoint p[],int num);//绘制多边形边线函数
	void ClearMatrix(int A[4][4]);//清除矩阵函数
	void DrawVView(CDC *pDC,CRect Rect);//绘制主视图函数
	void DrawHView(CDC *pDC,CRect Rect);//绘制俯视图函数
	void DrawWView(CDC *pDC,CRect Rect);//绘制左视图函数
	void DrawTriView(CDC *pDC,CRect Rect);//绘制三视图函数
	void init(CDC *pDC);
public:
	int MaxX,MaxY;//屏幕x和y的最大坐标

	double P3[10][4];//三维顶点
	double P2[10][3];//二维顶点
	CFace F[7];//面表
	int TV[4][4];//主视图变换矩阵
	int TH[4][4];//俯视图变换矩阵
	int TW[4][4];//左视图变换矩阵
	double Tri[10][4];//三视图变换后的矩阵
};

#endif // !defined(AFX_H4_H__9D7633F2_6309_4A43_A8BC_35DAD551AA72__INCLUDED_)
