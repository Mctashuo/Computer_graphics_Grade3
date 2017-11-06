// CRectangleView.h : interface of the CCRectangleView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CRECTANGLEVIEW_H__C975387F_FA2A_4D65_85D4_119476FCB26F__INCLUDED_)
#define AFX_CRECTANGLEVIEW_H__C975387F_FA2A_4D65_85D4_119476FCB26F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCRectangleView : public CView
{
protected: // create from serialization only
	CCRectangleView();
	DECLARE_DYNCREATE(CCRectangleView)

// Attributes
public:
	CCRectangleDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCRectangleView)
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
	virtual ~CCRectangleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCRectangleView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CRectangleView.cpp
inline CCRectangleDoc* CCRectangleView::GetDocument()
   { return (CCRectangleDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CRECTANGLEVIEW_H__C975387F_FA2A_4D65_85D4_119476FCB26F__INCLUDED_)
