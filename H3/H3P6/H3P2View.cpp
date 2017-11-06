// H3P2View.cpp : implementation of the CH3P2View class
//

#include "stdafx.h"
#include "H3P2.h"
#include "inputdialog.h"
#include "H3P2Doc.h"
#include "H3P2View.h"
#include "Elipse.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CH3P2View

IMPLEMENT_DYNCREATE(CH3P2View, CView)

BEGIN_MESSAGE_MAP(CH3P2View, CView)
	//{{AFX_MSG_MAP(CH3P2View)
	ON_COMMAND(ID_DRAW, OnDraw2)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CH3P2View construction/destruction

CH3P2View::CH3P2View()
{
	// TODO: add construction code here

}

CH3P2View::~CH3P2View()
{
}

BOOL CH3P2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CH3P2View drawing

void CH3P2View::OnDraw(CDC* pDC)
{
	CH3P2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CH3P2View printing

BOOL CH3P2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CH3P2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CH3P2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CH3P2View diagnostics

#ifdef _DEBUG
void CH3P2View::AssertValid() const
{
	CView::AssertValid();
}

void CH3P2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CH3P2Doc* CH3P2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CH3P2Doc)));
	return (CH3P2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CH3P2View message handlers

void CH3P2View::OnDraw2() 
{
	CDC *pDC=GetDC();
	RedrawWindow();
	CRect r;
	GetClientRect(&r);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(r.Width(), r.Height());
	pDC->SetViewportExt(r.Width(), -r.Height());
	pDC->SetViewportOrg(r.Width() / 2, r.Height() / 2);
	r.OffsetRect(-r.Width() / 2, -r.Height() / 2);

	Cinputdialog in;
	in.DoModal();
	CElipse e;
	e.a = in.m_a;
	e.b = in.m_b;
	e.drawElipse(pDC);	
}
