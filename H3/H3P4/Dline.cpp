// Dline.cpp: implementation of the CDline class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "H3P2.h"
#include "Dline.h"
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif
#include <math.h> 
#define Round(d) int(floor(d+0.5))

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CDline::CDline()
{

}

CDline::~CDline()
{

}

void CDline::MoveTo(CDC * pDC,CP2 p0)
{
	P0=p0;	
}

void CDline::MoveTo(CDC * pDC,double x0,double y0)
{
	P0=CP2(x0,y0);
	
}

void CDline::LineTo(CDC * pDC,CP2 p1)
{
	P1=p1;
	CP2 p,t;
	COLORREF clr = RGB(0,0,0);


	double k,e=0;
	k=(P1.y-P0.y)/(P1.x-P0.x);
	if(k>1.0)
	{
		if(P0.y>P1.y)
		{
			t=P0;P0=P1;P1=t;
		}

		
		for(p=P0;p.y<P1.y;p.y++)
		{
			e+=k;
			pDC->SetPixelV(Round(p.x),Round(p.y),RGB(e * 255,e*255,e*255));
			pDC->SetPixelV(Round(p.x+1),Round(p.y),RGB((1-e)*255,(1-e)*255,(1-e)*255));
			if(e>=1){
				e--;
				p.x++;
			}

		}
	}

	if(0.0<=k && k<=1.0)
	{
		if(P0.x>P1.x)
		{
			t=P0;P0=P1;P1=t;
		}

		for(p=P0;p.x<P1.x;p.x++)
		{
			e+=k;
			pDC->SetPixelV(Round(p.x),Round(p.y),RGB(e * 255,e*255,e*255));
			pDC->SetPixelV(Round(p.x),Round(p.y+1),RGB((1-e)*255,(1-e)*255,(1-e)*255));
			if(e>=1){
				e--;
				p.y++;
			}

		}
	}

	if(k>=-1.0 && k<0.0)
	{
		if(P0.x>P1.x)
		{
			t=P0;P0=P1;P1=t;
		}

		for(p=P0;p.x<P1.x;p.x++)
		{
			e-=k;
			pDC->SetPixelV(Round(p.x),Round(p.y),RGB(e * 255,e*255,e*255));
			pDC->SetPixelV(Round(p.x),Round(p.y+1),RGB((1-e)*255,(1-e)*255,(1-e)*255));
			if(e>1){
				e--;
				p.y--;
			}
		}
	}

	if(k<-1.0)
	{
		if(P0.y<P1.y)
		{
			t=P0;P0=P1;P1=t;
		}

		for(p=P0;p.y>P1.y;p.y--)
		{
			e-=k;
			pDC->SetPixelV(Round(p.x),Round(p.y),RGB(e * 255,e*255,e*255));
			pDC->SetPixelV(Round(p.x+1),Round(p.y),RGB((1-e)*255,(1-e)*255,(1-e)*255));
			if(e>=1){
				e--;
				p.x--;
			}

		}
	}


	P0=P1;
}


void CDline::LineTo(CDC *pDC,double x1,double y1)
{
	LineTo(pDC,CP2(x1,y1));
}

