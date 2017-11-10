// Perspective.cpp: implementation of the CPerspective class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Modeling.h"
#include "Perspective.h"
#define ROUND(a) int(a+0.5)//四舍五入
#define PI 3.1415926//圆周率
#include "math.h"//数学头文件

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPerspective::CPerspective()
{

}

CPerspective::~CPerspective()
{

}


void CPerspective::ReadVertex()
{
	int a = 400;
	P[0].x = 0;P[0].y = 0;P[0].z = 2 * sqrt(6) * a / 9;
	P[1].x=a/2;P[1].y=-sqrt(3)*a/6;P[1].z=-sqrt(6)*a/9;
	P[2].x=0;P[2].y=sqrt(3)*a/3;P[2].z=-sqrt(6)*a/9; 
	P[3].x=-a/2;P[3].y=-sqrt(3)*a/6;P[3].z=-sqrt(6)*a/9;  
}


void CPerspective::ReadFace()
{
	F[0].vN = 3;F[0].vI[0] = 0;F[0].vI[1] = 1;F[0].vI[2] = 2;
	F[1].vN = 3;F[1].vI[0] = 0;F[1].vI[1] = 2;F[1].vI[2] = 3;
	F[2].vN = 3;F[2].vI[0] = 0;F[2].vI[1] = 3;F[2].vI[2] = 1;
	F[3].vN = 3;F[3].vI[0] = 1;F[3].vI[1] = 3;F[3].vI[2] = 2;
}