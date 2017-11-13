// TransformView.h : interface of the CTransformView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TRANSFORMVIEW_H__E01EE421_2309_446B_B135_03654BE32069__INCLUDED_)
#define AFX_TRANSFORMVIEW_H__E01EE421_2309_446B_B135_03654BE32069__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "H3.h"
#include "H4.h"
class CTransformView : public CView
{
protected: // create from serialization only
	CTransformView();
	DECLARE_DYNCREATE(CTransformView)

// Attributes
public:
	CTransformDoc* GetDocument();

// Operations
public:
	CH3 h3;
	CH4 h4;
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransformView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTransformView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTransformView)
	afx_msg void OnXie2();
	afx_msg void OnXie();
	afx_msg void OnXie3();
	afx_msg void OnThree();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in TransformView.cpp
inline CTransformDoc* CTransformView::GetDocument()
   { return (CTransformDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSFORMVIEW_H__E01EE421_2309_446B_B135_03654BE32069__INCLUDED_)
