// H3.cpp: implementation of the CH3 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H3.h"
#include "Fill.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH3::CH3()
{

}

CH3::~CH3()
{

}


void CH3::ReadPoint()
{
	int a=200;
	//读入第一个正方形的上三角顶点坐标
	P1[0] = CPoint(1800/4-a,800/2+a);//P1
	P1[1] = CPoint(1800/4+a,800/2-a);//P2
	P1[2] = CPoint(1800/4-a,800/2-a);//P3
	//读入第一个正方形的下三角顶点坐标
	P2[0]=CPoint(1800/4-a,800/2+a);
	P2[1]=CPoint(1800/4+a,800/2+a);
	P2[2]=CPoint(1800/4+a,800/2-a);
	//读入第二个正方形的左三角顶点坐标
	P3[0]=CPoint(3*1800/4-a,800/2+a);
	P3[1]=CPoint(3*1800/4+a,800/2+a);
	P3[2]=CPoint(3*1800/4-a,800/2-a);
	//读入第二个正方形的右三角顶点坐标
	P4[0]=CPoint(3*1800/4+a,800/2+a);
	P4[1]=CPoint(3*1800/4+a,800/2-a);
	P4[2]=CPoint(3*1800/4-a,800/2-a);


}

