// star5View.cpp : implementation of the CStar5View class
//

#include "stdafx.h"
#include "star5.h"

#include "star5Doc.h"
#include "star5View.h"
#include <math.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStar5View

IMPLEMENT_DYNCREATE(CStar5View, CView)

BEGIN_MESSAGE_MAP(CStar5View, CView)
	//{{AFX_MSG_MAP(CStar5View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStar5View construction/destruction

CStar5View::CStar5View()
{
	// TODO: add construction code here

}

CStar5View::~CStar5View()
{
}

BOOL CStar5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CStar5View drawing

void CStar5View::OnDraw(CDC* pDC)
{
	CStar5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	CRect rect;
	GetClientRect(&rect);
	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetWindowExt(rect.Width(), rect.Height());
	pDC->SetViewportExt(rect.Width(), -rect.Height());
	pDC->SetViewportOrg(rect.Width() / 2, rect.Height() / 2);
	rect.OffsetRect(-rect.Width() / 2, -rect.Height() / 2);


	CBrush * pOldBrush;
	pOldBrush = (CBrush * ) pDC->SelectStockObject(NULL_BRUSH);
	double PI = acos(-1.0);
	int r = 200;
	CPoint p[5];
	double Beta = 72 * PI /180;
	double Alpha = 18 * PI/180;
	for(int n = 0;n<3;n++) 
	{

		for (int i = 0;i < 5;i++) {
			p[i].x =(r * cos(i * Beta + Alpha));
			p[i].y =(r * sin(i * Beta + Alpha));

		}

		CPoint v[5];
		v[0] = p[0];v[1] = p[2]; v[2] = p[4];v[3] = p[1]; v[4]= p[3];
		pDC->Polygon(v,5);
		v[0] = p[0];v[1] = p[1];v[2] = p[2];v[3]=p[3];v[4]=p[4];
		pDC->Polygon(v,5);
	
		r = r * cos(38* PI / 180) - r /2 * tan(38 * PI / 180);
		Alpha = Alpha + 36*PI/180;
	}
		pDC->SelectObject(pOldBrush);

}

/////////////////////////////////////////////////////////////////////////////
// CStar5View printing

BOOL CStar5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CStar5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CStar5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CStar5View diagnostics

#ifdef _DEBUG
void CStar5View::AssertValid() const
{
	CView::AssertValid();
}

void CStar5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CStar5Doc* CStar5View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CStar5Doc)));
	return (CStar5Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CStar5View message handlers
