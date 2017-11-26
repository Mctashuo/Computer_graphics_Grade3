// realismView.h : interface of the CRealismView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_REALISMVIEW_H__4F969F22_A6EF_4839_8971_854123FFAA23__INCLUDED_)
#define AFX_REALISMVIEW_H__4F969F22_A6EF_4839_8971_854123FFAA23__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Hexagonal.h"
#include "Phong.h"
class CRealismView : public CView
{
protected: // create from serialization only
	CRealismView();
	DECLARE_DYNCREATE(CRealismView)

// Attributes
public:
	CRealismDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRealismView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRealismView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
public:
	CHexagonal he;
	CPhong ph;
protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRealismView)
	afx_msg void OnHexagonal();
	afx_msg void OnDrawrec();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in realismView.cpp
inline CRealismDoc* CRealismView::GetDocument()
   { return (CRealismDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_REALISMVIEW_H__4F969F22_A6EF_4839_8971_854123FFAA23__INCLUDED_)
