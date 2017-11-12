// Polygon_FillView.cpp : implementation of the CPolygon_FillView class
//

#include "stdafx.h"
#include "Polygon_Fill.h"

#include "Polygon_FillDoc.h"
#include "Polygon_FillView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillView

IMPLEMENT_DYNCREATE(CPolygon_FillView, CView)

BEGIN_MESSAGE_MAP(CPolygon_FillView, CView)
	//{{AFX_MSG_MAP(CPolygon_FillView)
	ON_COMMAND(IDX_2, OnH2)
	ON_COMMAND(IDX_H3, OnH3)
	ON_COMMAND(IDX_H4, OnH4)
	ON_COMMAND(IDX_H5, OnH5)
	ON_COMMAND(IDX_H6, OnH6)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillView construction/destruction

CPolygon_FillView::CPolygon_FillView()
{
	// TODO: add construction code here

}

CPolygon_FillView::~CPolygon_FillView()
{
}

BOOL CPolygon_FillView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillView drawing

void CPolygon_FillView::OnDraw(CDC* pDC)
{
	CPolygon_FillDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillView diagnostics

#ifdef _DEBUG
void CPolygon_FillView::AssertValid() const
{
	CView::AssertValid();
}

void CPolygon_FillView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPolygon_FillDoc* CPolygon_FillView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPolygon_FillDoc)));
	return (CPolygon_FillDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPolygon_FillView message handlers

void CPolygon_FillView::OnH2() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	CDC *pDC = GetDC();
	h2.ReadPoint();
	h2.DrawRect(pDC,h2.P1);
	h2.DrawRect(pDC,h2.P2);
	Sleep(1000);
	h2.FillRect(pDC,h2.P1);

	h2.FillRect(pDC,h2.P2);

}

void CPolygon_FillView::OnH3() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	CDC *pDC = GetDC();
	h3.ReadPoint();
	h3.DrawTria(pDC,h3.P1);
	h3.DrawTria(pDC,h3.P2);
	h3.DrawTria(pDC,h3.P3);
	h3.DrawTria(pDC,h3.P4);
	Sleep(1000);
	h3.FillTria(pDC,h3.P1);
	h3.FillTria(pDC,h3.P2);
	h3.FillTria(pDC,h3.P3);
	h3.FillTria(pDC,h3.P4);


}

void CPolygon_FillView::OnH4() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	CDC *pDC = GetDC();
	h4.ReadPoint();
	h4.DrawTria(pDC,h4.P1);
	h4.DrawTria(pDC,h4.P2);
	h4.DrawTria(pDC,h4.P3);
	h4.DrawTria(pDC,h4.P4);
	Sleep(1000);
	h4.FillTria(pDC,h4.P1);
	h4.FillTria(pDC,h4.P2);
	h4.FillTria(pDC,h4.P3);
	h4.FillTria(pDC,h4.P4);
}

void CPolygon_FillView::OnH5() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	CDC *pDC = GetDC();
	h5.ReadPoint();
	h5.DrawTria(pDC,h5.P1);
	h5.DrawTria(pDC,h5.P2);
	h5.DrawTria(pDC,h5.P3);
	h5.DrawTria(pDC,h5.P4);
	Sleep(1000);
	h5.FillTria(pDC,h5.P1);
	h5.FillTria(pDC,h5.P2);
	h5.FillTria(pDC,h5.P3);
	h5.FillTria(pDC,h5.P4);
}

void CPolygon_FillView::OnH6() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	CDC *pDC = GetDC();
	h6.ReadPoint();
	h6.DrawRect(pDC,h6.P1);
	h6.DrawRect(pDC,h6.P2);
	h6.DrawRect(pDC,h6.P3);
	h6.DrawRect(pDC,h6.P4);
	Sleep(1000);
	h6.FillRect(pDC,h6.P1,RGB(255,0,0));

	h6.FillRect(pDC,h6.P2,RGB(0,255,0));
	h6.FillRect(pDC,h6.P3,RGB(255,255,0));
	h6.FillRect(pDC,h6.P4,RGB(0,0,255));
}
