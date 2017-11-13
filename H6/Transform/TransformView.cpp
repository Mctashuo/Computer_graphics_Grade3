// TransformView.cpp : implementation of the CTransformView class
//

#include "stdafx.h"
#include "Transform.h"

#include "TransformDoc.h"
#include "TransformView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTransformView

IMPLEMENT_DYNCREATE(CTransformView, CView)

BEGIN_MESSAGE_MAP(CTransformView, CView)
	//{{AFX_MSG_MAP(CTransformView)
	ON_COMMAND(IDX_XIE2, OnXie2)
	ON_COMMAND(IDX_XIE, OnXie)
	ON_COMMAND(IDX_XIE3, OnXie3)
	ON_COMMAND(IDX_THREE, OnThree)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTransformView construction/destruction

CTransformView::CTransformView()
{
	// TODO: add construction code here

}

CTransformView::~CTransformView()
{
}

BOOL CTransformView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTransformView drawing

void CTransformView::OnDraw(CDC* pDC)
{
	CTransformDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CRect Rect;
	GetClientRect(&Rect);//获得客户区大小

}

/////////////////////////////////////////////////////////////////////////////
// CTransformView diagnostics

#ifdef _DEBUG
void CTransformView::AssertValid() const
{
	CView::AssertValid();
}

void CTransformView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTransformDoc* CTransformView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTransformDoc)));
	return (CTransformDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTransformView message handlers

void CTransformView::OnXie2() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	CRect Rect;
	GetClientRect(&Rect);//获得客户区大小
	h3.init(64.3,45,GetDC(),Rect);
	h3.DrawCube(GetDC(),Rect);
	
}

void CTransformView::OnXie() 
{
	// TODO: Add your command handler code here
	CRect Rect;	
	RedrawWindow();
	GetClientRect(&Rect);//获得客户区大小
	h3.init(45,45,GetDC(),Rect);
	h3.DrawCube(GetDC(),Rect);
}

void CTransformView::OnXie3() 
{
	// TODO: Add your command handler code here
	CRect Rect;
	GetClientRect(&Rect);//获得客户区大小
	RedrawWindow();
	h4.init(GetDC());
	h4.DrawPolygon(GetDC(),Rect);
}

void CTransformView::OnThree() 
{
	// TODO: Add your command handler code here
	CRect Rect;
	GetClientRect(&Rect);//获得客户区大小
//	RedrawWindow();
	h4.init(GetDC());
	h4.DrawVView(GetDC(),Rect);//主视图
	h4.DrawHView(GetDC(),Rect);//俯视图
	h4.DrawWView(GetDC(),Rect);//侧视图	
}
