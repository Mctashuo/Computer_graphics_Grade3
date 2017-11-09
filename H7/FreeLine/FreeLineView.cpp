// FreeLineView.cpp : implementation of the CFreeLineView class
//

#include "stdafx.h"
#include "FreeLine.h"

#include "FreeLineDoc.h"
#include "FreeLineView.h"




#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFreeLineView

IMPLEMENT_DYNCREATE(CFreeLineView, CView)

BEGIN_MESSAGE_MAP(CFreeLineView, CView)
	//{{AFX_MSG_MAP(CFreeLineView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_COMMAND(IDX_BEZIER, OnBezier)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFreeLineView construction/destruction

CFreeLineView::CFreeLineView()
{
	// TODO: add construction code here

}

CFreeLineView::~CFreeLineView()
{
}

BOOL CFreeLineView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFreeLineView drawing

void CFreeLineView::OnDraw(CDC* pDC)
{
	CFreeLineDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);


	CRect Rect;
	GetClientRect(&Rect);
	if(IsBezier == TRUE)
	{
		b.DrawBezier(pDC,Rect);
	}
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CFreeLineView diagnostics

#ifdef _DEBUG
void CFreeLineView::AssertValid() const
{
	CView::AssertValid();
}

void CFreeLineView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFreeLineDoc* CFreeLineView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFreeLineDoc)));
	return (CFreeLineDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFreeLineView message handlers

void CFreeLineView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(IsBezier == TRUE) {
		b.MouseMove(point);
		Invalidate(FALSE);	
	}
	else
	{
		
	}
	CView::OnMouseMove(nFlags, point);
}

void CFreeLineView::OnLButtonUp(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(IsBezier == TRUE) {
		b.ButtonUp();
	}
	else
	{
		
	}
	CView::OnLButtonUp(nFlags, point);
}

void CFreeLineView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	if(IsBezier == TRUE) {
		b.ButtonDown();
	}
	else
	{
		
	}
	CView::OnLButtonDown(nFlags, point);
}



void CFreeLineView::OnBezier() 
{
	// TODO: Add your command handler code here
	CDC *pDC = GetDC();

	CDC MemDC;
	MemDC.CreateCompatibleDC(GetDC());

	
	IsBezier = TRUE;




}

BOOL CFreeLineView::OnCommand(WPARAM wParam, LPARAM lParam) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	return CView::OnCommand(wParam, lParam);
}
