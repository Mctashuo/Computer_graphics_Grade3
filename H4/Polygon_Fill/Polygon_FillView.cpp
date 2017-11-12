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
	h2.FillRect(pDC,h2.P1);

	h2.FillRect(pDC,h2.P2);

}
