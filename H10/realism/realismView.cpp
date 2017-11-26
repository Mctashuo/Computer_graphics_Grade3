// realismView.cpp : implementation of the CRealismView class
//

#include "stdafx.h"
#include "realism.h"

#include "realismDoc.h"
#include "realismView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRealismView

IMPLEMENT_DYNCREATE(CRealismView, CView)

BEGIN_MESSAGE_MAP(CRealismView, CView)
	//{{AFX_MSG_MAP(CRealismView)
	ON_COMMAND(IDX_Hexagonal, OnHexagonal)
	ON_COMMAND(IDX_DRAWREC, OnDrawrec)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRealismView construction/destruction

CRealismView::CRealismView()
{
	// TODO: add construction code here

}

CRealismView::~CRealismView()
{
}

BOOL CRealismView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CRealismView drawing

void CRealismView::OnDraw(CDC* pDC)
{
	CRealismDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CRealismView diagnostics

#ifdef _DEBUG
void CRealismView::AssertValid() const
{
	CView::AssertValid();
}

void CRealismView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRealismDoc* CRealismView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRealismDoc)));
	return (CRealismDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRealismView message handlers

void CRealismView::OnHexagonal() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	he.ReadPointFlat();
	he.ReadFace();
	he.DrawHexagonal(GetDC(),he.Pf);
	he.ReadPointSmooth();
	he.DrawHexagonal(GetDC(),he.Ps);
}


void CRealismView::OnDrawrec() 
{
	// TODO: Add your command handler code here
	RedrawWindow();
	ph.ReadPoint();
	ph.ReadFace();
	ph.InitParameter();
	CRect Rect;
	GetClientRect(&Rect);

	ph.DoubleBuffer(GetDC(),Rect);
}
