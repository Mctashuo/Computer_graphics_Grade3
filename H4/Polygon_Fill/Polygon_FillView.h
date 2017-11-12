// Polygon_FillView.h : interface of the CPolygon_FillView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_POLYGON_FILLVIEW_H__1BC9058E_5F38_45C7_8FDF_690CD301062E__INCLUDED_)
#define AFX_POLYGON_FILLVIEW_H__1BC9058E_5F38_45C7_8FDF_690CD301062E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "H2.h"
#include "H3.h"
#include "H4.h"
#include "H5.h"
#include "H6.h"
#include "H7.h"
#include "H8.h"
#include "H9.h"
#include "H10.h"
class CPolygon_FillView : public CView
{
protected: // create from serialization only
	CPolygon_FillView();
	DECLARE_DYNCREATE(CPolygon_FillView)

// Attributes
public:
	CPolygon_FillDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPolygon_FillView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPolygon_FillView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:
	H2 h2;
	CH3 h3;
	CH4 h4;
	CH5 h5;
	CH6 h6;
	CH7 h7;
	CH8 h8;
	CH9 h9;
	CH10 h10;
	BOOL seed;
// Generated message map functions
protected:
	//{{AFX_MSG(CPolygon_FillView)
	afx_msg void OnH2();
	afx_msg void OnH3();
	afx_msg void OnH4();
	afx_msg void OnH5();
	afx_msg void OnH6();
	afx_msg void OnH7();
	afx_msg void OnH8();
	afx_msg void OnH9();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnH10();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Polygon_FillView.cpp
inline CPolygon_FillDoc* CPolygon_FillView::GetDocument()
   { return (CPolygon_FillDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_POLYGON_FILLVIEW_H__1BC9058E_5F38_45C7_8FDF_690CD301062E__INCLUDED_)
