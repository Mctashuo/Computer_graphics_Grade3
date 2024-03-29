// H10.cpp: implementation of the CH10 class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "H10.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CH10::CH10()
{
	Point[0]=CPoint(1300,400);
	Point[1]=CPoint(950,450);
	Point[2]=CPoint(750,250);
	Point[3]=CPoint(650,500);
	Point[4]=CPoint(750,800);
	Point[5]=CPoint(900,600);
	Point[6]=CPoint(1000,800);	

}

CH10::~CH10()
{

}

void CH10::init(CDC *pDC)
{
	pDC->Polygon(Point,7);
}

void CH10::PolygonFill(CDC *pDC)
{
	COLORREF FillColor,BoundaryColor,PixelColor;
	BoundaryColor=RGB(0,0,0);//边界色为黑色
	FillColor=RGB(0,255,0);//填充色为蓝色		
	Head=new CStack_Node();
	Head->PixelPoint=Seed;
	Head->pNext=NULL;
	while(Head!=NULL)
	{	
		CStack_Node *poppoint;
		poppoint=Pop();
		if(NULL==poppoint)
		{
			pDC->TextOut(10,10,"填充完毕");
			pDC->DeleteDC();
			return;
		}
		Last=Base;
		pDC->SetPixel(poppoint->PixelPoint,FillColor);//画种�
		//上
		PTop.x=poppoint->PixelPoint.x;
		PTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PTop);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PTop);
		}
				//下
		PBottom.x=poppoint->PixelPoint.x;
		PBottom.y=poppoint->PixelPoint.y-1;
		PixelColor=pDC->GetPixel(PBottom);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PBottom);
		}
				//右
		PRight.x=poppoint->PixelPoint.x+1;
		PRight.y=poppoint->PixelPoint.y;
		PixelColor=pDC->GetPixel(PRight);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PRight);
		}
		//左
		PLeft.x=poppoint->PixelPoint.x-1;
		PLeft.y=poppoint->PixelPoint.y;
		PixelColor=pDC->GetPixel(PLeft.x,PLeft.y);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{//不在边界并且不是种子		
			Push(PLeft);
		}



	}
}
