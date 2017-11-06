// H3P2Doc.h : interface of the CH3P2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_H3P2DOC_H__F0A18642_E8E0_4AFA_858C_7153F0672852__INCLUDED_)
#define AFX_H3P2DOC_H__F0A18642_E8E0_4AFA_858C_7153F0672852__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CH3P2Doc : public CDocument
{
protected: // create from serialization only
	CH3P2Doc();
	DECLARE_DYNCREATE(CH3P2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CH3P2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CH3P2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CH3P2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_H3P2DOC_H__F0A18642_E8E0_4AFA_858C_7153F0672852__INCLUDED_)
