// H5.cpp: implementation of the CH5 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H5.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH5::CH5()
{

}

CH5::~CH5()
{

}

void CH5::ReadPoint()
{
	int a=200;

	P1[0]=CPoint(1800/2-a,800/2+a);//P1
	P1[1]=CPoint(1800/2,800/2);//P2
	P1[2]=CPoint(1800/2-a,800/2-a);//P3

	P2[0]=CPoint(1800/2-a,800/2+a);
	P2[1]=CPoint(1800/2+a,800/2+a);
	P2[2]=CPoint(1800/2,800/2);

	P3[0]=CPoint(1800/2+a,800/2+a);
	P3[1]=CPoint(1800/2+a,800/2-a);
	P3[2]=CPoint(1800/2,800/2);

	P4[0]=CPoint(1800/2,800/2);
	P4[1]=CPoint(1800/2+a,800/2-a);
	P4[2]=CPoint(1800/2-a,800/2-a);

}
