// HR.cpp: implementation of the CHR class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "HR.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CHR::CHR()
{

}

CHR::~CHR()
{

}

void CHR::DrawRect(CDC *pDC,CPoint *P)
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


void CHR::FillRect(CDC *pDC,CPoint *P)
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

void CHR::ReadPoint()
{
	
}
