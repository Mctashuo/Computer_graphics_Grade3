// H9.cpp: implementation of the CH9 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H9.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH9::CH9()
{
	Point[0]=CPoint(500,700);
	Point[1]=CPoint(901,700);
	Point[2]=CPoint(901,301);
	Point[3]=CPoint(1100,301);
	Point[4]=CPoint(1100,100);
	Point[5]=CPoint(900,100);
	Point[6]=CPoint(900,300);
	Point[7]=CPoint(500,300);
}

CH9::~CH9()
{

}


void CH9::init(CDC *pDC)
{
	pDC->Polygon(Point,8);
}


