// FractalDoc.h : interface of the CFractalDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_FRACTALDOC_H__81CF1B0D_C657_4545_A2DF_B19E1D618F16__INCLUDED_)
#define AFX_FRACTALDOC_H__81CF1B0D_C657_4545_A2DF_B19E1D618F16__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CFractalDoc : public CDocument
{
protected: // create from serialization only
	CFractalDoc();
	DECLARE_DYNCREATE(CFractalDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CFractalDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CFractalDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CFractalDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_FRACTALDOC_H__81CF1B0D_C657_4545_A2DF_B19E1D618F16__INCLUDED_)
