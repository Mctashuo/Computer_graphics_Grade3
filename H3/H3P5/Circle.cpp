// Circle.cpp: implementation of the CCircle class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "H3P2.h"
#include "Circle.h"
#include "P2.h"
#include <math.h>
#define Round(d) int(floor(d+0.5))
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CCircle::CCircle()
{

}

CCircle::~CCircle()
{

}


void CCircle::drawCircle(CDC *pDC)
{
	
	CP2 c(0,radius);
	double e = 0,t;
	for(;c.x<c.y;c.x++)
	{
		t = sqrt(radius * radius - (c.x + 1) * (c.x +1));
		e = t - floor(t);
		c.y = t;
		
		draw(pDC,c.x,c.y,e);

	}
}

void CCircle::draw(CDC *pDC,double x,double y,double e) 
{
		COLORREF clr1 = RGB(e * 255,e*255,e*255),clr2 = RGB((1-e)*255,(1-e)*255,(1-e)*255);
		
		pDC->SetPixelV(Round(x),Round(y),clr1); //(x,y)
		pDC->SetPixelV(Round(x),Round(y-1),clr2);

		pDC->SetPixelV(Round(y),Round(x),clr1); //(y,x)
		pDC->SetPixelV(Round(y-1),Round(x),clr2);

		pDC->SetPixelV(Round(y),-Round(x),clr1); //(y,-x)
		pDC->SetPixelV(Round(y-1),-Round(x),clr2);

		pDC->SetPixelV(Round(x),-Round(y),clr1); //(x,-y)
		pDC->SetPixelV(Round(x),-Round(y-1),clr2);

		pDC->SetPixelV(-Round(x),-Round(y),clr1); //(-x,-y)
		pDC->SetPixelV(-Round(x),-Round(y-1),clr2);

		pDC->SetPixelV(-Round(y),-Round(x),clr1); //(-y,-x)
		pDC->SetPixelV(-Round(y-1),-Round(x),clr2);

		pDC->SetPixelV(-Round(y),Round(x),clr1); //(-y,x)
		pDC->SetPixelV(-Round(y-1),Round(x),clr2);

		pDC->SetPixelV(-Round(x),Round(y),clr1); //(-x,y)
		pDC->SetPixelV(-Round(x),Round(y-1),clr2);




}
