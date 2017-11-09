// Bsimple.cpp: implementation of the CBsimple class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "FreeLine.h"
#include "Bsimple.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBsimple::CBsimple()
{
	point = new CPoint[10];
	start = TRUE;
	pointCount = 0;
}

CBsimple::~CBsimple()
{

}


void CBsimple::ConnectPoint(CDC *pDC)
{
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,3,RGB(0,0,0));
	pOldPen = pDC->SelectObject(&NewPen);

	for(int i = 0;i < pointCount;i++)
	{
		if(i == 0)
		{
			pDC->MoveTo(point[i]);

		}
		else
		{
			pDC->LineTo(point[i]);
		}
	}
	

	pDC->SelectObject(pOldPen);
	
	NewPen.DeleteObject();
}

void CBsimple::DrawBsimple()
{

}

void CBsimple::DrawPrinciples()
{

}

void CBsimple::LButton(CPoint p,CDC *pDC)
{
	if(start)
	{
		point[pointCount].x = p.x;
		point[pointCount].y = p.y;
		if(pointCount<10)
			pointCount++;
		else
			start = FALSE;
		ConnectPoint(pDC);
	}
}

void CBsimple::RButton()
{

}
