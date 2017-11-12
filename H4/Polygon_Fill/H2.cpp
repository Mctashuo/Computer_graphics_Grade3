// H2.cpp: implementation of the H2 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H2.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif
#define ROUND(x) int(x+0.5)//Àƒ…·ŒÂ»Î∫Í
#include "math.h"
//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

H2::H2()
{

}

H2::~H2()
{

}

void H2::ReadPoint()
{
	int a = 200;
	P1[0] = CPoint(1800 / 4 - a,700 / 2 + a);
	P1[1] = CPoint(1800 / 4 + a,800 / 2 + a);
	P1[2] = CPoint(1800 / 4 + a,800 / 2 - a);
	P1[3] = CPoint(1800 / 4 - a,800 / 2 - a);

	int b = ROUND(sqrt(2) * a);
	P2[0] = CPoint(3 * 1800 / 4,800 / 2 + b);
	P2[1] = CPoint(3 * 1800 / 4 + b,800 / 2);
	P2[2] = CPoint(3 * 1800 / 4,800 / 2 - b);
	P2[3] = CPoint(3 * 1800 / 4 - b,800 / 2);

}
void H2::DrawRect(CDC *pDC,CPoint *P)
{
	CPoint T;
	for(int i = 0;i < 4; i++)
	{
		if(i == 0)
		{
			pDC->MoveTo(P[i].x,P[i].y);
			T = P[0];

		}
		else
		{
			pDC->LineTo(P[i].x,P[i].y);
		}
	}
	pDC->LineTo(T.x,T.y);
}


void H2::FillRect(CDC *pDC,CPoint *P)
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
	fill.Gouraud(pDC);
	
}
