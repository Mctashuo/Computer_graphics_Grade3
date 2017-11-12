// Edge.cpp: implementation of the CEdge class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "Edge.h"
#define   ROUND(a) int(a+0.5) //四舍五入
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CEdge::CEdge()
{
	FillColor=RGB(0,0,0);
	Point[0]=CPoint(1300,400);
	Point[1]=CPoint(950,450);
	Point[2]=CPoint(750,250);
	Point[3]=CPoint(650,500);
	Point[4]=CPoint(750,800);
	Point[5]=CPoint(900,600);
	Point[6]=CPoint(1000,800);	
	
	MinX=Point[0].x;MaxX=Point[0].x;
	MinY=Point[0].y;MaxY=Point[0].y;

	for(int i=0;i<=6;i++)
	{
		if(Point[i].x>MaxX)
		{
			MaxX=Point[i].x;
		}
		if(Point[i].x<MinX)
		{
			MinX=Point[i].x;
		}
		if(Point[i].y>MaxY)
		{
			MaxY=Point[i].y;
		}
		if(Point[i].y<MinY)
		{
			MinY=Point[i].y;
		}		
	}

}

CEdge::~CEdge()
{

}

void CEdge::DrawPolygon(CDC *pDC)//绘制多边形
{
	int m,n;
	for(int j=0;j<=6;j++)
	{
		m=j,n=j+1;
		if(7==n) n=0;
		pDC->MoveTo(Point[m]);
		pDC->LineTo(Point[n]);
	}
}

void CEdge::DrawFrame(CDC *pDC)
{
	pDC->MoveTo(MinX,MinY);
	pDC->LineTo(MinX,MaxY);
	pDC->LineTo(MaxX,MaxY);
	pDC->LineTo(MaxX,MinY);
	pDC->LineTo(MinX,MinY);
}

void CEdge::Fill(CDC *pDC)
{
	COLORREF BackColor=RGB(255,255,255);
	int m,n;
	int LowerY,LargerY;	
	double x,y,k;
	for(int i=0;i<=6;i++)
	{
		m=i,n=i+1;
		n=(i+1)%7;
		k=(double(Point[m].x-Point[n].x))/(Point[m].y-Point[n].y);//计算1/k	
		if(Point[m].y<Point[n].y)//得到每条边的y最大值和y最小值
		{
			LowerY=Point[m].y;
			LargerY=Point[n].y;
			x=Point[m].x;//得到x|ymin
		}
		else
		{
			LowerY=Point[n].y;
			LargerY=Point[m].y;
			x=Point[n].x;
		}
		for(y=LowerY;y<LargerY;y++)//对每一条边填充
		{			
			for(int j=ROUND(x);j<MaxX;j++)
			{
				if(pDC->GetPixel(j,ROUND(y))==FillColor)
					pDC->SetPixel(j,ROUND(y),BackColor);
				else
					pDC->SetPixel(j,ROUND(y),FillColor);
			}
			x+=k;//计算下一个x起点坐标
			DrawPolygon(pDC);//重绘多边形
			DrawFrame(pDC);//重绘外接矩形
		}		
	}	
}

