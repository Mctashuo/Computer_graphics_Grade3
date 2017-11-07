// FractalView.cpp : implementation of the CFractalView class
//

#include "stdafx.h"
#include "Fractal.h"

#include "FractalDoc.h"
#include "FractalView.h"


#include "Koch.h"
#include "Menger.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFractalView

IMPLEMENT_DYNCREATE(CFractalView, CView)

BEGIN_MESSAGE_MAP(CFractalView, CView)
	//{{AFX_MSG_MAP(CFractalView)
	ON_COMMAND(IDX_KOCH, OnKoch)
	ON_COMMAND(IDX_MENGER, OnMenger)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFractalView construction/destruction

CFractalView::CFractalView()
{
	// TODO: add construction code here

}

CFractalView::~CFractalView()
{
}

BOOL CFractalView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CFractalView drawing

void CFractalView::OnDraw(CDC* pDC)
{
	CFractalDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CFractalView diagnostics

#ifdef _DEBUG
void CFractalView::AssertValid() const
{
	CView::AssertValid();
}

void CFractalView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CFractalDoc* CFractalView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CFractalDoc)));
	return (CFractalDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFractalView message handlers




//KOCH
void CFractalView::OnKoch() 
{
	// TODO: Add your command handler code here
	CDC * pDC = GetDC();
	CKoch k;
	RedrawWindow();
	k.DrawKoch(pDC);
}




//Menger

void CFractalView::OnMenger() 
{
	// TODO: Add your command handler code here
	CDC * pDC = GetDC();

	CMenger c;
	RedrawWindow();
	c.DrawMenger(pDC);



}
