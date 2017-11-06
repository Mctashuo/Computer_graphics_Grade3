// H3P2View.h : interface of the CH3P2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_H3P2VIEW_H__964848D4_12BF_4240_9F6A_3976F79DE7B9__INCLUDED_)
#define AFX_H3P2VIEW_H__964848D4_12BF_4240_9F6A_3976F79DE7B9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CH3P2View : public CView
{
protected: // create from serialization only
	CH3P2View();
	DECLARE_DYNCREATE(CH3P2View)

// Attributes
public:
	CH3P2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CH3P2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CH3P2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CH3P2View)
	afx_msg void OnDraw1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in H3P2View.cpp
inline CH3P2Doc* CH3P2View::GetDocument()
   { return (CH3P2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_H3P2VIEW_H__964848D4_12BF_4240_9F6A_3976F79DE7B9__INCLUDED_)
