// Bezier.cpp: implementation of the CBezier class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "FreeLine.h"
#include "Bezier.h"
#define ROUND(a) int(a+0.5)//四舍五


#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CBezier::CBezier()
{
	LeftCheck = FALSE;
	MoveCheck = FALSE;
	Point = -1;

	//4个顶点
	//P[0][0] = 200;P[0][1]
	P[0].x = 500;P[0].y = 660;
	P[1].x = 750;P[1].y = 150;
	P[2].x = 1250;P[2].y = 150;
	P[3].x = 1500;P[3].y = 675;



}

CBezier::~CBezier()
{

}


void CBezier::Bezier3(CDC *pDC)
{

	int lx,ly,rate=100;
	double Bern03,Bern13,Bern23,Bern33;
	lx=P[0].x;ly=P[0].y;//t＝0的起点x,y坐标
	pDC->MoveTo(lx,ly);
	CPen NewPen(PS_SOLID,1,RGB(0,0,255));//蓝色画笔画3次Bezier曲线
	CPen *POldPen=pDC->SelectObject(&NewPen);
	for(double t=0;t<=1;t+=1.0/rate)
	{
		Bern03=(1-t)*(1-t)*(1-t);//计算Bern0,3(t)
		Bern13=3*t*(1-t)*(1-t);//计算Bern1,3(t)
		Bern23=3*t*t*(1-t);//计算Bern2,3(t)
		Bern33=t*t*t;//计算Bern3,3(t)
		lx=ROUND(P[0].x*Bern03+P[1].x*Bern13+P[2].x*Bern23+P[3].x*Bern33);
		ly=ROUND(P[0].y*Bern03+P[1].y*Bern13+P[2].y*Bern23+P[3].y*Bern33);
		pDC->LineTo(lx,ly);
	}
	pDC->SelectObject(POldPen);
	NewPen.DeleteObject();	



}

void CBezier::DrawBezier(CDC *pDC,CRect Rect)
{
//	CRect Rect;
//	GetClientRect(&Rect);
	
	CBitmap * OldBitmap,NewBitmap;


	CDC Picture,MemDC;
	MemDC.CreateCompatibleDC(pDC);	//创建与显示DC兼容的内存DC
	
	NewBitmap.CreateCompatibleBitmap(pDC,Rect.Width(),Rect.Height());	//创建冲突兼容内存位图
	//NewBitmap.LoadOEMBitmap(134);
	OldBitmap = MemDC.SelectObject(&NewBitmap);

	MemDC.FillSolidRect(Rect,pDC->GetBkColor());	//old background color fill
	MemDC.BitBlt(0,0,Rect.Width(),Rect.Height(),&Picture,0,0,SRCCOPY);

	CPen NewPen,*OldPen;

	NewPen.CreatePen(PS_SOLID,3,RGB(0,0,0));

	OldPen = MemDC.SelectObject(&NewPen);

	
	MemDC.MoveTo(P[0].x,P[0].y);
	MemDC.Ellipse(P[0].x - 2,P[0].y - 2,P[0].x + 2,P[0].y + 2);

	for(int i = 1;i < 4;i++)
	{
		MemDC.LineTo(P[i].x,P[i].y);
		//MemDC.Ellipse(P[i].x - 2,P[i].y - 2,P[i].x +2,P[i].x + 2);
	}

	MemDC.TextOut(P[0].x,P[0].y+5,"P0");
	MemDC.TextOut(P[1].x,P[1].y-20,"P1");
	MemDC.TextOut(P[2].x,P[2].y-20,"P2");
	MemDC.TextOut(P[3].x,P[3].y+5,"P3");


	Bezier3(&MemDC);
	pDC->BitBlt(0,0,Rect.Width(),Rect.Height(),&MemDC,0,0,SRCCOPY);
	MemDC.SelectObject(OldBitmap);
	MemDC.SelectObject(OldPen);

	NewPen.DeleteObject();
}


void CBezier::MouseMove(CPoint point) 
{
	if(MoveCheck == TRUE)
	{
		P[Point].x = point.x;
		P[Point].y = point.y;
	}
	Point = -1;

	int i =0;
	for(;i < 4;i++)
	{
		if((point.x-P[i].x)*(point.x-P[i].x)+(point.y-P[i].y)*(point.y-P[i].y)<100)
		{
			Point=i;
			LeftCheck=TRUE;
			SetCursor(LoadCursor(NULL,IDC_SIZEALL));//改变为十字箭头光标
			break;
		}
	}

	if(10==i)
	{
		Point=-1;
	}
}


void CBezier::ButtonDown()
{

	if(TRUE==LeftCheck)
	{
		MoveCheck=TRUE;
	}
}

void CBezier::ButtonUp()
{
	LeftCheck = FALSE;
	MoveCheck = FALSE;
	Point = 0;
	

}