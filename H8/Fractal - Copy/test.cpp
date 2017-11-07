// test.cpp : implementation file
//

#include "stdafx.h"
#include "Fractal.h"
#include "test.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// test

IMPLEMENT_DYNCREATE(test, CView)

test::test()
{
}

test::~test()
{
}


BEGIN_MESSAGE_MAP(test, CView)
	//{{AFX_MSG_MAP(test)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// test drawing

void test::OnDraw(CDC* pDC)
{
	CDocument* pDoc = GetDocument();
	// TODO: add draw code here
}

/////////////////////////////////////////////////////////////////////////////
// test diagnostics

#ifdef _DEBUG
void test::AssertValid() const
{
	CView::AssertValid();
}

void test::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// test message handlers
