// Menger.cpp: implementation of the CMenger class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Fractal.h"
#include "Menger.h"



#include "InputDlg.h"
#include "math.h"
#define ROUND(x) int(x+0.5)
#define DX d*cos(PI/4)//Ð±±ßÍ¶Ó°
#define PI 3.1415926


#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CMenger::CMenger()
{

}

CMenger::~CMenger()
{

}

void CMenger::DrawMenger(CDC *pDC)
{
	InputDlg dlg;
	dlg.DoModal();
	n = dlg.m_n;
	distance = 500.0;
	Menger(pDC,n,CP1(600.0,450.0),distance);
}
void CMenger::Menger(CDC *pDC,int n,CP1 p,double d)
{
	if(n == 0) 
	{
		Cube_f(pDC,p,d);
		Cube_t(pDC,p,d);
		Cube_r(pDC,p,d);
		return;
	}
	d = d / 3;
	Menger(pDC,n-1,CP1(p.x+2*DX,p.y+2*d-2*DX),d);//±àºÅ1
	Menger(pDC,n-1,CP1(p.x+2*DX+d,p.y+2*d-2*DX),d);//±àºÅ2
	Menger(pDC,n-1,CP1(p.x+2*DX+2*d,p.y+2*d-2*DX),d);//±àºÅ3
	Menger(pDC,n-1,CP1(p.x+DX,p.y+2*d-DX),d);//±àºÅ4
	Menger(pDC,n-1,CP1(p.x+DX+2*d,p.y+2*d-DX),d);//±àºÅ5
	Menger(pDC,n-1,CP1(p.x,p.y+2*d),d);//±àºÅ6
	Menger(pDC,n-1,CP1(p.x+d,p.y+2*d),d);//±àºÅ7
	Menger(pDC,n-1,CP1(p.x+2*d,p.y+2*d),d);//±àºÅ8
	Menger(pDC,n-1,CP1(p.x+2*DX,p.y+d-2*DX),d);//±àºÅ9
	Menger(pDC,n-1,CP1(p.x+2*DX+2*d,p.y+d-2*DX),d);//±àºÅ10
	Menger(pDC,n-1,CP1(p.x,p.y+d),d);//±àºÅ11
	Menger(pDC,n-1,CP1(p.x+2*d,p.y+d),d);//±àºÅ12
	Menger(pDC,n-1,CP1(p.x+2*DX,p.y-2*DX),d);//±àºÅ13
	Menger(pDC,n-1,CP1(p.x+2*DX+d,p.y-2*DX),d);//±àºÅ14
	Menger(pDC,n-1,CP1(p.x+2*DX+2*d,p.y-2*DX),d);//±àºÅ15
	Menger(pDC,n-1,CP1(p.x+DX,p.y-DX),d);//±àºÅ16
	Menger(pDC,n-1,CP1(p.x+DX+2*d,p.y-DX),d);//±àºÅ17
	Menger(pDC,n-1,p,d);//±àºÅ18
	Menger(pDC,n-1,CP1(p.x+d,p.y),d);//±àºÅ19
	Menger(pDC,n-1,CP1(p.x+2*d,p.y),d);//±àºÅ20


}


void CMenger::Cube_f(CDC * pDC,CP1 p,double d)
{
	CBrush brush;
	brush.CreateSolidBrush(RGB(254,173,139));
	CBrush *pbrushOld = pDC->SelectObject(&brush);
	CPoint point[4];
	point[0] = CPoint(ROUND(p.x),ROUND(p.y));
	point[1] = CPoint(ROUND(p.x + d),ROUND(p.y));
	point[2] = CPoint(ROUND(p.x + d),ROUND(p.y + d));
	point[3] = CPoint(ROUND(p.x),ROUND(p.y + d));
	pDC->Polygon(point,4);
	pDC->SelectObject(pbrushOld);
	brush.DeleteObject();

}

void CMenger::Cube_t(CDC * pDC,CP1 p,double d)
{
	CBrush brush;
	brush.CreateSolidBrush(RGB(223,122,79));
	CBrush *pbrushOld = pDC->SelectObject(&brush);
	CPoint point[4];
	point[0] = CPoint(ROUND(p.x),ROUND(p.y));
	point[1] = CPoint(ROUND(p.x + DX),ROUND(p.y - DX));
	point[2] = CPoint(ROUND(p.x + d + DX),ROUND(p.y - DX));
	point[3] = CPoint(ROUND(p.x + d),ROUND(p.y));
	pDC->Polygon(point,4);
	pDC->SelectObject(pbrushOld);
	brush.DeleteObject();	
}

void CMenger::Cube_r(CDC * pDC,CP1 p,double d)
{
	CBrush brush;
	brush.CreateSolidBrush(RGB(177,66,66));
	CBrush *pbrushOld = pDC->SelectObject(&brush);
	CPoint point[4];
	point[0] = CPoint(ROUND(p.x + d),ROUND(p.y));
	point[1] = CPoint(ROUND(p.x + DX + d),ROUND(p.y - DX));
	point[2] = CPoint(ROUND(p.x + d + DX),ROUND(p.y + d - DX));
	point[3] = CPoint(ROUND(p.x + d),ROUND(p.y + d));
	pDC->Polygon(point,4);
	pDC->SelectObject(pbrushOld);
	brush.DeleteObject();	
}