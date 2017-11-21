// ModelingView.h : interface of the CModelingView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MODELINGVIEW_H__301B3B0D_6B99_4C47_A731_7AC7B0079C02__INCLUDED_)
#define AFX_MODELINGVIEW_H__301B3B0D_6B99_4C47_A731_7AC7B0079C02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Perspective.h"
#include "Z_Buffer.h"
class CModelingView : public CView
{
protected: // create from serialization only
	CModelingView();
	DECLARE_DYNCREATE(CModelingView)

// Attributes
public:
	CModelingDoc* GetDocument();
public:
	BOOL PER;
	CPerspective p;
	CZ_Buffer z;
// Operations
public:
	
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CModelingView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CModelingView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CModelingView)
	afx_msg void OnPerspective();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnZBuffer();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ModelingView.cpp
inline CModelingDoc* CModelingView::GetDocument()
   { return (CModelingDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MODELINGVIEW_H__301B3B0D_6B99_4C47_A731_7AC7B0079C02__INCLUDED_)
