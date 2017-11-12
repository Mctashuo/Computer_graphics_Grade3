// Polygon_FillDoc.h : interface of the CPolygon_FillDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_POLYGON_FILLDOC_H__6FC0964F_EE81_4050_BAF3_BD6EA9FD5B03__INCLUDED_)
#define AFX_POLYGON_FILLDOC_H__6FC0964F_EE81_4050_BAF3_BD6EA9FD5B03__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPolygon_FillDoc : public CDocument
{
protected: // create from serialization only
	CPolygon_FillDoc();
	DECLARE_DYNCREATE(CPolygon_FillDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPolygon_FillDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPolygon_FillDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPolygon_FillDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_POLYGON_FILLDOC_H__6FC0964F_EE81_4050_BAF3_BD6EA9FD5B03__INCLUDED_)
