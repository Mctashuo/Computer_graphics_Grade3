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
	BoundaryColor=RGB(0,0,0);//�߽�ɫΪ��ɫ
	FillColor=RGB(0,255,0);//���ɫΪ��ɫ		
	Head=new CStack_Node();
	Head->PixelPoint=Seed;
	Head->pNext=NULL;
	while(Head!=NULL)
	{	
		CStack_Node *poppoint;
		poppoint=Pop();
		if(NULL==poppoint)
		{
			pDC->TextOut(10,10,"������");
			pDC->DeleteDC();
			return;
		}
		Last=Base;
		pDC->SetPixel(poppoint->PixelPoint,FillColor);//��������ɫ
		//��
		PLeft.x=poppoint->PixelPoint.x-1;
		PLeft.y=poppoint->PixelPoint.y;
		PixelColor=pDC->GetPixel(PLeft.x,PLeft.y);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{//���ڱ߽粢�Ҳ�������		
			Push(PLeft);
		}
		//��
		PTop.x=poppoint->PixelPoint.x;
		PTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PTop);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PTop);
		}
		//��
		PRight.x=poppoint->PixelPoint.x+1;
		PRight.y=poppoint->PixelPoint.y;
		PixelColor=pDC->GetPixel(PRight);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PRight);
		}
		//��
		PBottom.x=poppoint->PixelPoint.x;
		PBottom.y=poppoint->PixelPoint.y-1;
		PixelColor=pDC->GetPixel(PBottom);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PBottom);
		}
		//����
		PLeftTop.x=poppoint->PixelPoint.x-1;
		PLeftTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PLeftTop.x,PLeftTop.y);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PLeftTop);
		}
		//����
		PRightTop.x=poppoint->PixelPoint.x+1;
		PRightTop.y=poppoint->PixelPoint.y+1;
		PixelColor=pDC->GetPixel(PRightTop);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{		
			Push(PRightTop);
		}
		//����
		PLeftBottom.x=poppoint->PixelPoint.x-1;
		PLeftBottom.y=poppoint->PixelPoint.y-1;
		PixelColor=pDC->GetPixel(PLeftBottom);
		if(PixelColor!=BoundaryColor && PixelColor!=FillColor)
		{	
			Push(PLeftBottom);
		}
		//����
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
		Base=Base->pNext;//ָ���½��Ľ��
	}
	Base->pNext=Last;
	
}
	

CStack_Node * CPFill::Pop()
{
	Base=Head;
	if(NULL==Base->pNext)//�ѵ���������һ��ָ��ָ��NULL
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
	Seed.x=point.x;//���ѡ������λ��
	Seed.y=point.y;
	PolygonFill(pDC);//�������

}

void CPFill::init(CDC *pDC)
{

}