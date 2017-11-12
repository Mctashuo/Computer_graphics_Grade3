// PFill.cpp: implementation of the CPFill class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Polygon_Fill.h"
#include "PFill.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CPFill::CPFill()
{

}

CPFill::~CPFill()
{

}


void CPFill::PolygonFill(CDC *pDC)
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
		pDC->SetPixel(poppoint->PixelPoint,FillColor);//画种子蓝色
		//左
		PLeft.x=poppoint->PixelPoint.x-1;
		PLeft.y=poppoint->PixelPoint.y;
		PixelColor=pDC->GetPixel(PLeft.x,PLeft.y);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{//不在边界并且不是种子		
			Push(PLeft);
		}
		//上
		PTop.x=poppoint->PixelPoint.x;
		PTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PTop);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PTop);
		}
		//右
		PRight.x=poppoint->PixelPoint.x+1;
		PRight.y=poppoint->PixelPoint.y;
		PixelColor=pDC->GetPixel(PRight);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PRight);
		}
		//下
		PBottom.x=poppoint->PixelPoint.x;
		PBottom.y=poppoint->PixelPoint.y-1;
		PixelColor=pDC->GetPixel(PBottom);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PBottom);
		}
		//左上
		PLeftTop.x=poppoint->PixelPoint.x-1;
		PLeftTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PLeftTop.x,PLeftTop.y);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PLeftTop);
		}
		//右上
		PRightTop.x=poppoint->PixelPoint.x+1;
		PRightTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PRightTop);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PRightTop);
		}
		//左下
		PLeftBottom.x=poppoint->PixelPoint.x-1;
		PLeftBottom.y=poppoint->PixelPoint.y-1;
		PixelColor=pDC->GetPixel(PLeftBottom);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PLeftBottom);
		}
		//右下
		PRightBottom.x=poppoint->PixelPoint.x+1;
		PRightBottom.y=poppoint->PixelPoint.y-1;
		PixelColor=pDC->GetPixel(PRightBottom);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PRightBottom);
		}				
	}
}


void CPFill::Push(CPoint point)
{

	Base=Head;
	Last=new CStack_Node;
	Last->PixelPoint=point;
	Last->pNext=NULL;
	if(NULL==Base)
	{
		Head=Last;
		return;
	}
	while(NULL!=Base->pNext)
	{
		Base=Base->pNext;//指向新建的结点
	}
	Base->pNext=Last;
	
}
	

CStack_Node * CPFill::Pop()
{
	Base=Head;
	if(NULL==Base->pNext)//把弹出后的最后一个指针指向NULL
	{
		Head=NULL;
		return Base;
	}
	while(NULL!=Base->pNext)
	{
		Base=Base->pNext;
		if(Base->pNext==Last) 
		{
			Base->pNext=NULL;
			return Last;
		}
	}
	return NULL;

}


void CPFill::start(CDC *pDC,CPoint point)
{
	Seed.x=point.x;//鼠标选择种子位置
	Seed.y=point.y;
	PolygonFill(pDC);//进行填充

}

void CPFill::init(CDC *pDC)
{

}