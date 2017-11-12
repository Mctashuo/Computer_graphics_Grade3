// H8.cpp: implementation of the CH8 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H8.h"
#define ROUND(a) int(a+0.5)//四舍五入

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH8::CH8()
{

}

CH8::~CH8()
{

}


void CH8::Fill(CDC * pDC)
{
	COLORREF BackColor=RGB(255,255,255);//背景色为白色
	int i,j,m,n;
	int lowerY,largerY;
	for(i=0;i<=6;i++)
	{
		m=i,n=i+1;
		n=(i+1)%7;
		double k=double(Point[m].y-Point[n].y)/(Point[m].x-Point[n].x);
		double x,y;
		if(Point[m].y<Point[n].y)//得到每条边的y最大值和y最小值
		{
			lowerY=Point[m].y;
			largerY=Point[n].y;
			x=Point[m].x;//得到x|ymin
		}
		else
		{
			lowerY=Point[n].y;
			largerY=Point[m].y;
			x=Point[n].x;
		}
		for(y=lowerY;y<largerY;y++)//对每一条边
		{
			Sleep(1);
			for(j=ROUND(x);j<Point[5].x;j++)
			{				
				if(pDC->GetPixel(j,ROUND(y))==FillColor)
					pDC->SetPixel(j,ROUND(y),BackColor);
				else
					pDC->SetPixel(j,ROUND(y),FillColor);
			}
			for(j=Point[5].x;j<=ROUND(x);j++)
			{
				if(pDC->GetPixel(j,ROUND(y))==FillColor)
					pDC->SetPixel(j,ROUND(y),BackColor);
				else
					pDC->SetPixel(j,ROUND(y),FillColor);
			}
			x+=1/k;//扫描线移动
			DrawPolygon(pDC);//重绘多边形
			DrawFrame(pDC);
		}		
	}	
}