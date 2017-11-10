// ModelingView.cpp : implementation of the CModelingView class
//

#include "stdafx.h"
#include "Modeling.h"

#include "ModelingDoc.h"
#include "ModelingView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CModelingView

IMPLEMENT_DYNCREATE(CModelingView, CView)

BEGIN_MESSAGE_MAP(CModelingView, CView)
	//{{AFX_MSG_MAP(CModelingView)
	ON_COMMAND(IDX_PERSPECTIVE, OnPerspective)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CModelingView construction/destruction

CModelingView::CModelingView()
{
	// TODO: add construction code here

}

CModelingView::~CModelingView()
{
}

BOOL CModelingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CModelingView drawing

void CModelingView::OnDraw(CDC* pDC)
{
	CModelingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CModelingView diagnostics

#ifdef _DEBUG
void CModelingView::AssertValid() const
{
	CView::AssertValid();
}

void CModelingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CModelingDoc* CModelingView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CModelingDoc)));
	return (CModelingDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CModelingView message handlers

void CModelingView::OnPerspective() 
{
	// TODO: Add your command handler code here
	p.ReadVertex();
	p.ReadFace();



}
