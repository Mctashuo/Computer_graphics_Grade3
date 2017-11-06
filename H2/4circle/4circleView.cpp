// 4circleView.cpp : implementation of the CMy4circleView class
//

#include "stdafx.h"
#include "4circle.h"
#include "math.h"
#include "4circleDoc.h"
#include "4circleView.h"


#include "data.h";
extern int bradius;
extern int sradius;

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMy4circleView

IMPLEMENT_DYNCREATE(CMy4circleView, CView)

BEGIN_MESSAGE_MAP(CMy4circleView, CView)
	//{{AFX_MSG_MAP(CMy4circleView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMy4circleView construction/destruction

CMy4circleView::CMy4circleView()
{
	// TODO: add construction code here

}

CMy4circleView::~CMy4circleView()
{
}

BOOL CMy4circleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMy4circleView drawing

void CMy4circleView::OnDraw(CDC* pDC)
{
	CMy4circleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	CRect r;
	GetClientRect(&r);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(r.Width(), r.Height());
	pDC->SetViewportExt(r.Width(), -r.Height());
	pDC->SetViewportOrg(r.Width() / 2, r.Height() / 2);
	r.OffsetRect(-r.Width() / 2, -r.Height() / 2);

	r.DeflateRect(2 * bradius,2 * bradius);
	CBrush * pOldBrush;
	pOldBrush = (CBrush * ) pDC->SelectStockObject(NULL_BRUSH);


	//´óÔ²
	const double pi=acos(-1.0); 
	double cos45 = (double) cos(45 * pi /180);


	CRect brect(CPoint(-bradius - sradius ,-bradius - sradius),CPoint(bradius + sradius,bradius + sradius));
	pDC->Ellipse(brect);

	//Ð¡Ô²

	 
	double temp = 9 * pi /180;

	double x,y;
	for(int i = 0;i < 40;i++) {
		x = bradius * cos(temp * i);
		y = bradius * sin(temp * i);

		CRect rect2(CPoint(x - sradius, y + sradius), CPoint(x + sradius, y - sradius));
		pDC->Ellipse(rect2);
	}

	pDC->SelectObject(pOldBrush);
	
}

/////////////////////////////////////////////////////////////////////////////
// CMy4circleView printing

BOOL CMy4circleView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMy4circleView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMy4circleView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMy4circleView diagnostics

#ifdef _DEBUG
void CMy4circleView::AssertValid() const
{
	CView::AssertValid();
}

void CMy4circleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy4circleDoc* CMy4circleView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy4circleDoc)));
	return (CMy4circleDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMy4circleView message handlers
