// H6.cpp: implementation of the CH6 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H6.h"
#include "math.h"
#define ROUND(x) int(x+0.5)//四舍五入宏

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH6::CH6()
{

}

CH6::~CH6()
{

}

void CH6::ReadPoint()
{
	int a = 200;
	P1[0]=CPoint(1800/2-a,800/2-a);//P1
	P1[1]=CPoint(1800/2-a,800/2);//P2
	P1[2]=CPoint(1800/2,800/2);//P3
	P1[3]=CPoint(1800/2,800/2-a);//P3
	//读入左下正方形的顶点坐标
	P2[0]=CPoint(1800/2-a,800/2);
	P2[1]=CPoint(1800/2-a,800/2+a);
	P2[2]=CPoint(1800/2,800/2+a);
	P2[3]=CPoint(1800/2,800/2);
	//读入右下正方形的顶点坐标
	P3[0]=CPoint(1800/2,800/2);
	P3[1]=CPoint(1800/2,800/2+a);
	P3[2]=CPoint(1800/2+a,800/2+a);
	P3[3]=CPoint(1800/2+a,800/2);
	//读入右上正方形的顶点坐标
	P4[0]=CPoint(1800/2,800/2-a);
	P4[1]=CPoint(1800/2,800/2);
	P4[2]=CPoint(1800/2+a,800/2);
	P4[3]=CPoint(1800/2+a,800/2-a);

}

void CH6::FillRect(CDC *pDC,CPoint *P,COLORREF c)
{
	CFill fill;
	CPx Point[4];
	for(int i = 0;i < 4;i++)
	{
		Point[i].x = P[i].x;
		Point[i].y = P[i].y;
	}
	fill.SetPoint(Point,4);
	fill.CreateBucket();
	fill.CreateEdge();
	fill.Color = c;
	fill.Gouraud(pDC);

	
}

