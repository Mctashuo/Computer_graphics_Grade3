// FractalView.cpp : implementation of the CFractalView class
//

#include "stdafx.h"
#include "Fractal.h"

#include "FractalDoc.h"
#include "FractalView.h"

#include "InputDlg.h"
#include "test1.h"
#include "math.h"

#define ROUND(x) int(x + 0.5)
#define PI 3.1415926535


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
	InputDlg dlg;
	dlg.DoModal();
	n = dlg.m_n;
	RedrawWindow();

	distance =  800 / pow(3,n);

	a.x = 0,a.y = 0,b.x = 0,b.y = 0,alpha = 0;
	KOCH1(pDC,n);
	a.x = 0,a.y = 0,b.x = 0,b.y = 0,alpha = 0;
	KOCH2(pDC,n);
	a.x = 0,a.y = 0,b.x = 0,b.y = 0,alpha = 0;
	KOCH3(pDC,n);
}


void CFractalView::KOCH1(CDC *pDC,int n)	//a + 0
{
	position.x = 600;
	position.y = 700;
	
	if(n == 0) 
	{
		b.x += distance * cos(alpha * PI / 180);
		b.y += distance * sin(alpha * PI / 180);
		pDC->MoveTo(ROUND(a.x + position.x),ROUND(a.y + position.y));
		pDC->LineTo(ROUND(b.x + position.x),ROUND(b.y + position.y));
		a = b;
		return;
	}

	KOCH1(pDC,n-1);
	alpha += 60;
	KOCH1(pDC,n-1);
	alpha -=120;
	KOCH1(pDC,n-1);
	alpha += 60;
	KOCH1(pDC,n-1);
}

void CFractalView::KOCH2(CDC *pDC,int n)	//a - 60
{
	position.x = 600;
	position.y = 700;
	
	if(n == 0) 
	{
		b.x += distance * cos((alpha - 60) * PI / 180);
		b.y += distance * sin((alpha - 60) * PI / 180);
		pDC->MoveTo(ROUND(a.x + position.x),ROUND(a.y + position.y));
		pDC->LineTo(ROUND(b.x + position.x),ROUND(b.y + position.y));
		a = b;
		return;
	}

	KOCH2(pDC,n-1);
	alpha -= 60;
	KOCH2(pDC,n-1);
	alpha +=120;
	KOCH2(pDC,n-1);
	alpha -= 60;
	KOCH2(pDC,n-1);
}


void CFractalView::KOCH3(CDC *pDC,int n)	//a + 120
{
	position.x = 1400;
	position.y = 700;
	
	if(n == 0) 
	{
		b.x += distance * cos((alpha - 120) * PI / 180);
		b.y += distance * sin((alpha - 120) * PI / 180);
		pDC->MoveTo(ROUND(a.x + position.x),ROUND(a.y + position.y));
		pDC->LineTo(ROUND(b.x + position.x),ROUND(b.y + position.y));
		a = b;
		return;
	}

	KOCH3(pDC,n-1);
	alpha += 60;
	KOCH3(pDC,n-1);
	alpha -=120;
	KOCH3(pDC,n-1);
	alpha += 60;
	KOCH3(pDC,n-1);
}




//Menger

void CFractalView::OnMenger() 
{
	// TODO: Add your command handler code here
	CDC * pDC = GetDC();
	InputDlg dlg;
	dlg.DoModal();
	n = dlg.m_n;
	RedrawWindow();
	
	test1 t;
	t.testfw(pDC);


}
