// FractalView.h : interface of the CFractalView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FRACTALVIEW_H__9B8D4FE1_530A_406B_B900_F3F8C73F0EC6__INCLUDED_)
#define AFX_FRACTALVIEW_H__9B8D4FE1_530A_406B_B900_F3F8C73F0EC6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "P1.h"
class CFractalView : public CView
{

protected:
	int n,alpha; //递归深度，转角
	CP1 a,b,position;	//起点，终点，位置
	double distance;  //直线长度
	
public:
	void KOCH1(CDC * pDC,int n);
	void KOCH2(CDC * pDC,int n);
	void KOCH3(CDC * pDC,int n);
protected: // create from serialization only
	CFractalView();
	DECLARE_DYNCREATE(CFractalView)

// Attributes
public:
	CFractalDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFractalView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFractalView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFractalView)
	afx_msg void OnKoch();
	afx_msg void OnMenger();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in FractalView.cpp
inline CFractalDoc* CFractalView::GetDocument()
   { return (CFractalDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRACTALVIEW_H__9B8D4FE1_530A_406B_B900_F3F8C73F0EC6__INCLUDED_)
