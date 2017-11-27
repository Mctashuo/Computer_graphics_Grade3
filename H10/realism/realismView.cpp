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
	ON_WM_TIMER()
	ON_COMMAND(IDX_RED, OnRed)
	ON_COMMAND(IDX_GREEN, OnGreen)
	ON_COMMAND(IDX_BLUE, OnBlue)
	ON_COMMAND(IDX_GOLD, OnGold)
	ON_COMMAND(IDX_RUBY, OnRuby)
	ON_COMMAND(IDX_ARGENTUM, OnArgentum)
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
	PER = FALSE;
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
	ph.init();
	CRect Rect;
	GetClientRect(&Rect);
	ph.DoubleBuffer(GetDC(),Rect);
	SetTimer(1,15,NULL);
	PER = TRUE;
}

void CRealismView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	CRect Rect;
	GetClientRect(&Rect);
	if(PER == TRUE)
		ph.PlayW(GetDC(),Rect);
	CView::OnTimer(nIDEvent);

}

void CRealismView::OnRed() 
{
	// TODO: Add your command handler code here

	ph.pLight->Light[0].SetMirror(CRGB(1.0,0.0,0.0));
	CRect Rect;
	GetClientRect(&Rect);
	ph.InitParameter();
	ph.DoubleBuffer(GetDC(),Rect);
}

void CRealismView::OnGreen() 
{
	// TODO: Add your command handler code here
	ph.pLight->Light[0].SetMirror(CRGB(0.0,1.0,0.0));
	CRect Rect;
	GetClientRect(&Rect);
	ph.InitParameter();
	ph.DoubleBuffer(GetDC(),Rect);
}

void CRealismView::OnBlue() 
{
	// TODO: Add your command handler code here
	ph.pLight->Light[0].SetMirror(CRGB(0.0,0.0,1.0));
	CRect Rect;
	GetClientRect(&Rect);
	ph.InitParameter();
	ph.DoubleBuffer(GetDC(),Rect);
}

void CRealismView::OnGold() 
{
	// TODO: Add your command handler code here
	ph.pMaterial->SetEnviroment(CRGB(0.247,0.2,0.075));
	ph.pMaterial->SetDiffuse(CRGB(0.752,0.606,0.226));
	ph.pMaterial->SetMirror(CRGB(0.628,0.556,0.366));
	ph.pMaterial->SetExp(5.0);
	CRect Rect;
	GetClientRect(&Rect);
	ph.InitParameter();
	ph.DoubleBuffer(GetDC(),Rect);
}

void CRealismView::OnRuby() 
{
	// TODO: Add your command handler code here
	ph.pMaterial->SetEnviroment(CRGB(0.175,0.012,0.012));
	ph.pMaterial->SetDiffuse(CRGB(0.614,0.041,0.041));
	ph.pMaterial->SetMirror(CRGB(0.728,0.527,0.527));
	ph.pMaterial->SetExp(3.0);
	CRect Rect;
	GetClientRect(&Rect);
	ph.InitParameter();
	ph.DoubleBuffer(GetDC(),Rect);
}

void CRealismView::OnArgentum() 
{
	// TODO: Add your command handler code here
	ph.pMaterial->SetEnviroment(CRGB(0.192,0.192,0.192));
	ph.pMaterial->SetDiffuse(CRGB(0.508,0.508,0.508));
	ph.pMaterial->SetMirror(CRGB(0.508,0.508,0.508));
	ph.pMaterial->SetExp(5.0);
	CRect Rect;
	GetClientRect(&Rect);
	ph.InitParameter();
	ph.DoubleBuffer(GetDC(),Rect);
}
