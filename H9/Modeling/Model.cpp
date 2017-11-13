// Model.cpp: implementation of the CModel class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Modeling.h"
#include "Model.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CModel::CModel()
{

}

CModel::~CModel()
{

}


void CModel::ReadFace()
{

}


void CModel::ReadVertex()

{
	
}

void CModel::DrawBuffer(CDC *pDC,CRect Rect)
{
	pDC->SetMapMode(MM_ANISOTROPIC);//自定义坐标系
	pDC->SetWindowExt(Rect.Width(),Rect.Height());
	pDC->SetViewportExt(Rect.Width(),-Rect.Height());//x轴水平向右，y轴垂直向上
	pDC->SetViewportOrg(Rect.Width()/2,Rect.Height()/2);//屏幕中心为原点	
	
	CDC MemDC,Picture;

	MemDC.CreateCompatibleDC(pDC);
	MemDC.SetMapMode(MM_ANISOTROPIC);
	MemDC.SetWindowExt(Rect.Width(),Rect.Height());
	MemDC.SetViewportExt(Rect.Width(),-Rect.Height());
	MemDC.SetViewportOrg(Rect.Width()/2,Rect.Height()/2);


	CBitmap NewBitmap,*OldBitmap;
	NewBitmap.CreateCompatibleBitmap(pDC,Rect.Width(),Rect.Height());	//创建冲突兼容内存位图
	OldBitmap=MemDC.SelectObject(&NewBitmap);
	
	CRect r = CRect(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height());
	MemDC.FillSolidRect(r,pDC->GetBkColor());	//old background color fill

	MemDC.BitBlt(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height(),&Picture,-Rect.Width()/2,-Rect.Height()/2,SRCCOPY);
	CPen NewPen,*OldPen;

	NewPen.CreatePen(PS_SOLID,2,RGB(0,0,0));

	OldPen = MemDC.SelectObject(&NewPen);
/*	CPoint p1,p2;
	p1.x = -500;
	p1.y = -500;
	p2.x = 500;p2.y = 500;
	MemDC.MoveTo(p1);
	MemDC.LineTo(p2);
*/	
	DrawObject(&MemDC);	

	//MemDC.MoveTo(-500,-500);
//	MemDC.LineTo(500,500);

	pDC->BitBlt(-Rect.Width()/2,-Rect.Height()/2,Rect.Width(),Rect.Height(),&MemDC,-Rect.Width()/2,-Rect.Height()/2,SRCCOPY);

	MemDC.SelectObject(OldBitmap);	
	NewBitmap.DeleteObject();

}


void CModel::DrawObject(CDC *pDC)
{
	pDC->MoveTo(-500,-500);
	pDC->LineTo(500,500);

}