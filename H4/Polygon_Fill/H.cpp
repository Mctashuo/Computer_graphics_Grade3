// H.cpp: implementation of the CH class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H.h"
#include "Fill.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH::CH()
{

}

CH::~CH()
{

}


void CH::DrawTria(CDC *pDC,CPoint *P)
{
	CPoint T;
	for(int i = 0;i < 3; i++)
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

void CH::FillTria(CDC *pDC,CPoint *P)
{
	CFill fill;
	CPx Point[3];
	for(int i = 0;i < 4;i++)
	{
		Point[i].x = P[i].x;
		Point[i].y = P[i].y;
	}
	fill.SetPoint(Point,3);
	fill.CreateBucket();
	fill.CreateEdge();
	fill.Gouraud(pDC);
}

void CH::ReadPoint()
{
	
}
