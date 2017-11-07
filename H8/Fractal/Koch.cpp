// Koch.cpp: implementation of the CKoch class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Fractal.h"
#include "Koch.h"
#include "InputDlg.h"


#define ROUND(x) int(x + 0.5)
#define PI 3.1415926535
#include "math.h"


#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CKoch::CKoch()
{

}

CKoch::~CKoch()
{

}



void CKoch::DrawKoch(CDC *pDC) 
{
	InputDlg dlg;
	dlg.DoModal();
	n = dlg.m_n;
	
	distance =  800 / pow(3,n);

	a.x = 0,a.y = 0,b.x = 0,b.y = 0,alpha = 0;
	KOCH1(pDC,n);
	a.x = 0,a.y = 0,b.x = 0,b.y = 0,alpha = 0;
	KOCH2(pDC,n);
	a.x = 0,a.y = 0,b.x = 0,b.y = 0,alpha = 0;
	KOCH3(pDC,n);
}
void CKoch::KOCH1(CDC *pDC,int n)	//a + 0
{
	position.x = 600;
	position.y = 700;
	
	if(n == 0) 
	{
		b.x += distance * cos(alpha * PI / 180);
		b.y += distance * sin(alpha * PI / 180);
		pDC->MoveTo(ROUND(a.x + position.x),ROUND(a.y + position.y));
		pDC->LineTo(ROUND(b.x + position.x),ROUND(b.y + position.y));
		a = b;
		return;
	}

	KOCH1(pDC,n-1);
	alpha += 60;
	KOCH1(pDC,n-1);
	alpha -=120;
	KOCH1(pDC,n-1);
	alpha += 60;
	KOCH1(pDC,n-1);
}



void CKoch::KOCH2(CDC *pDC,int n)	//a - 60
{
	position.x = 600;
	position.y = 700;
	
	if(n == 0) 
	{
		b.x += distance * cos((alpha - 60) * PI / 180);
		b.y += distance * sin((alpha - 60) * PI / 180);
		pDC->MoveTo(ROUND(a.x + position.x),ROUND(a.y + position.y));
		pDC->LineTo(ROUND(b.x + position.x),ROUND(b.y + position.y));
		a = b;
		return;
	}

	KOCH2(pDC,n-1);
	alpha -= 60;
	KOCH2(pDC,n-1);
	alpha +=120;
	KOCH2(pDC,n-1);
	alpha -= 60;
	KOCH2(pDC,n-1);
}



void CKoch::KOCH3(CDC *pDC,int n)	//a + 120
{
	position.x = 1400;
	position.y = 700;
	
	if(n == 0) 
	{
		b.x += distance * cos((alpha - 120) * PI / 180);
		b.y += distance * sin((alpha - 120) * PI / 180);
		pDC->MoveTo(ROUND(a.x + position.x),ROUND(a.y + position.y));
		pDC->LineTo(ROUND(b.x + position.x),ROUND(b.y + position.y));
		a = b;
		return;
	}

	KOCH3(pDC,n-1);
	alpha += 60;
	KOCH3(pDC,n-1);
	alpha -=120;
	KOCH3(pDC,n-1);
	alpha += 60;
	KOCH3(pDC,n-1);
}
