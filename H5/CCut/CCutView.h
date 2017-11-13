// CCutView.h : interface of the CCCutView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CCUTVIEW_H__6431A1A0_4D2F_4E7C_BCE5_37D1EDF6E15A__INCLUDED_)
#define AFX_CCUTVIEW_H__6431A1A0_4D2F_4E7C_BCE5_37D1EDF6E15A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CCCutView : public CView
{
protected: // create from serialization only
	CCCutView();
	DECLARE_DYNCREATE(CCCutView)
	void clip(double,double,double,double);//�ü�����
	unsigned int EnCode(double,double);//���뺯��

	double wxl,wxr,wyb,wyt,vxl,vxr,vyb,vyt;//���崰�����ӿ�
	unsigned int RC1,RC2;//ֱ�߶˵�ı���
	double a,b,c,d;//���ӱ任ϵ�� 
	CRect Rect;
// Attributes
public:
	CCCutDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCCutView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CCCutView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CCCutView)
	afx_msg void OnDrawx();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in CCutView.cpp
inline CCCutDoc* CCCutView::GetDocument()
   { return (CCCutDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CCUTVIEW_H__6431A1A0_4D2F_4E7C_BCE5_37D1EDF6E15A__INCLUDED_)
