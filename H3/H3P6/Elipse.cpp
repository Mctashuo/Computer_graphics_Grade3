// Elipse.cpp: implementation of the CElipse class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "H3P2.h"
#include "Elipse.h"
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

CElipse::CElipse()
{

}

CElipse::~CElipse()
{

}


void CElipse::drawElipse(CDC *pDC) 
{
	CP2 c(0,b);
	double e = 0,t=0,temp;
	for(temp = a * a / sqrt(a*a+b*b);c.x<temp;c.x++)
	{
		t = sqrt((a * a *b * b - b*b * c.x  * c.x)/(a*a));
		e = t - floor(t);
		c.y = t;
		
		draw(pDC,c.x,c.y,e);

	}
	e = t = 0;
	CP2 c1(a,0);
	for(temp = b * b /  sqrt(a*a+b*b);c1.y<temp;c1.y++)
	{
		t = sqrt((a * a * b * b - a * a * c1.y * c1.y)/(b*b));
		e = t - floor(t);
		c1.x = t;
		
		draw(pDC,c1.x,c1.y,e);
	}

}

void CElipse::draw(CDC *pDC,double x,double y,double e)
{
	
		COLORREF clr1 = RGB(e * 255,e*255,e*255),clr2 = RGB((1-e)*255,(1-e)*255,(1-e)*255);
		
		pDC->SetPixelV(Round(x),Round(y),clr1); //(x,y)
		pDC->SetPixelV(Round(x),Round(y-1),clr2);

		pDC->SetPixelV(-Round(x),Round(y),clr1); //(-x,y)
		pDC->SetPixelV(-Round(x),Round(y-1),clr2);

		pDC->SetPixelV(Round(x),-Round(y),clr1); //(x,-y)
		pDC->SetPixelV(Round(x),-Round(y-1),clr2);

		pDC->SetPixelV(-Round(x),-Round(y),clr1); //(-x,-y)
		pDC->SetPixelV(-Round(x),-Round(y-1),clr2);




}