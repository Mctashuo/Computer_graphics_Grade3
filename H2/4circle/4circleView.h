// 4circleView.h : interface of the CMy4circleView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_4CIRCLEVIEW_H__71ADC8D4_7921_456A_8114_293815944E08__INCLUDED_)
#define AFX_4CIRCLEVIEW_H__71ADC8D4_7921_456A_8114_293815944E08__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMy4circleView : public CView
{
protected: // create from serialization only
	CMy4circleView();
	DECLARE_DYNCREATE(CMy4circleView)

// Attributes
public:
	CMy4circleDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMy4circleView)
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
	virtual ~CMy4circleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMy4circleView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in 4circleView.cpp
inline CMy4circleDoc* CMy4circleView::GetDocument()
   { return (CMy4circleDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_4CIRCLEVIEW_H__71ADC8D4_7921_456A_8114_293815944E08__INCLUDED_)
