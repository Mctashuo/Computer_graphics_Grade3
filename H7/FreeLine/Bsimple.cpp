// Bsimple.cpp: implementation of the CBsimple class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "FreeLine.h"
#include "Bsimple.h"
#define ROUND(a) int(a+0.5)//四舍五

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
	init();
}

CBsimple::~CBsimple()
{
	point = new CPoint[10];
	start = TRUE;
	pointCount = 0;
}

void CBsimple::init()
{
	point = new CPoint[10];
	start = TRUE;
	pointCount = 0;
}

void CBsimple::ConnectPoint(CDC *pDC)
{
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,3,RGB(0,0,0));
	pOldPen = pDC->SelectObject(&NewPen);

	for(int i = 0;i < pointCount;i++)	//连接顶点
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

void CBsimple::DrawBsimple(CDC *pDC)
{
	double F03,F13,F23,F33;
	long sx,sy;
	
	sx = ROUND((point[0].x + point[1].x * 4.0 + point[2].x) / 6);	//算每一个点
	sy = ROUND((point[0].y + point[1].y * 4.0 + point[2].y) / 6);

	pDC->MoveTo(sx,sy);

	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_SOLID,1,RGB(0,0,0));
	pOldPen = pDC->SelectObject(&NewPen);


	for(int i = 1;i < pointCount - 3;i++)
	{
		for(double t = 0;t <= 1;t += 1.0 /10.0)
		{
			F03 = (-t*t*t+3*t*t-3*t+1)/6;
			F13=(3*t*t*t-6*t*t+4)/6;
			F23=(-3*t*t*t+3*t*t+3*t+1)/6;
			F33=t*t*t/6;
			sx=ROUND(point[i-1].x*F03+point[i].x*F13+point[i+1].x*F23+point[i+2].x*F33);
			sy=ROUND(point[i-1].y*F03+point[i].y*F13+point[i+1].y*F23+point[i+2].y*F33);
			pDC->LineTo(sx,sy);


		}
	}

	pDC->SelectObject(pOldPen);
	NewPen.DeleteObject();

	DrawPrinciples(pDC);

}

void CBsimple::DrawPrinciples(CDC *pDC)	//draw Struct
{
	CPen NewPen,*pOldPen;
	NewPen.CreatePen(PS_DOT,1,RGB(0,0,0));
	pOldPen = pDC->SelectObject(&NewPen);	
	int x,y;

	for(int i = 1;i < pointCount - 2;i++)
	{
		pDC->MoveTo(point[i - 1].x,point[i - 1].y);
		pDC->LineTo(point[i + 1].x,point[i + 1].y);
		x = ((point[i - 1].x + point[i + 1].x) / 2);
		y = ((point[i - 1].y + point[i + 1].y) / 2);

		pDC->MoveTo(x,y);
		pDC->LineTo(point[i].x,point[i].y);
	}
	pDC->SelectObject(pOldPen);
	NewPen.DeleteObject();

}

void CBsimple::LButton(CPoint p,CDC *pDC)	//获取点
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

void CBsimple::RButton(CDC *pDC)
{
	if(pointCount != 0)
	{
		start = FALSE;
		DrawBsimple(pDC);
	
	}
}
