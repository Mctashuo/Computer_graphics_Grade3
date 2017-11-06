// CRectangleView.cpp : implementation of the CCRectangleView class
//

#include "stdafx.h"
#include "CRectangle.h"
#include "Rectangle.h"
#include "CRectangleDoc.h"
#include "CRectangleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCRectangleView

IMPLEMENT_DYNCREATE(CCRectangleView, CView)

BEGIN_MESSAGE_MAP(CCRectangleView, CView)
	//{{AFX_MSG_MAP(CCRectangleView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCRectangleView construction/destruction

CCRectangleView::CCRectangleView()
{
	// TODO: add construction code here

}

CCRectangleView::~CCRectangleView()
{
}

BOOL CCRectangleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CCRectangleView drawing

void CCRectangleView::OnDraw(CDC* pDC)
{
	CCRectangleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CCRectangleView printing

BOOL CCRectangleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CCRectangleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CCRectangleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CCRectangleView diagnostics

#ifdef _DEBUG
void CCRectangleView::AssertValid() const
{
	CView::AssertValid();
}

void CCRectangleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CCRectangleDoc* CCRectangleView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CCRectangleDoc)));
	return (CCRectangleDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCRectangleView message handlers
