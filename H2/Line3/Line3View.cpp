// Line3View.cpp : implementation of the CLine3View class
//

#include "stdafx.h"
#include "Line3.h"

#include "Line3Doc.h"
#include "Line3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLine3View

IMPLEMENT_DYNCREATE(CLine3View, CView)

BEGIN_MESSAGE_MAP(CLine3View, CView)
	//{{AFX_MSG_MAP(CLine3View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLine3View construction/destruction

CLine3View::CLine3View()
{
	// TODO: add construction code here

}

CLine3View::~CLine3View()
{
}

BOOL CLine3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CLine3View drawing

void CLine3View::OnDraw(CDC* pDC)
{
	CLine3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);


	CRect r;
	GetClientRect(&r);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(r.Width(), r.Height());
	pDC->SetViewportExt(r.Width(), -r.Height());
	pDC->SetViewportOrg(r.Width() / 2, r.Height() / 2);
	r.OffsetRect(-r.Width() / 2, -r.Height() / 2);
	
	//使用SetPixel()函数绘制直线
	int x;
	for (x = 100; x <= 400; x++)
		pDC->SetPixel(x, 0, RGB(0, 0, 0));

	//使用LineTO()函数绘制直线
	CPoint p0(100,100), p1(400, 100);
	CPen NewPen, *pOldPen;
	NewPen.CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
	pOldPen = pDC->SelectObject(&NewPen);
	pDC->MoveTo(p1);
	pDC->LineTo(p0);

	pDC->SelectObject(pOldPen);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CLine3View printing

BOOL CLine3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CLine3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CLine3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CLine3View diagnostics

#ifdef _DEBUG
void CLine3View::AssertValid() const
{
	CView::AssertValid();
}

void CLine3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CLine3Doc* CLine3View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CLine3Doc)));
	return (CLine3Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CLine3View message handlers
