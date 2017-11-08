// FreeLineView.h : interface of the CFreeLineView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FREELINEVIEW_H__02A83AE8_8426_49B4_A48B_08AEF9A12608__INCLUDED_)
#define AFX_FREELINEVIEW_H__02A83AE8_8426_49B4_A48B_08AEF9A12608__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFreeLineView : public CView
{
protected: // create from serialization only
	CFreeLineView();
	DECLARE_DYNCREATE(CFreeLineView)

// Attributes
public:
	CFreeLineDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFreeLineView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFreeLineView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFreeLineView)
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnBezier();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in FreeLineView.cpp
inline CFreeLineDoc* CFreeLineView::GetDocument()
   { return (CFreeLineDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FREELINEVIEW_H__02A83AE8_8426_49B4_A48B_08AEF9A12608__INCLUDED_)
