// ModelingDoc.cpp : implementation of the CModelingDoc class
//

#include "stdafx.h"
#include "Modeling.h"

#include "ModelingDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CModelingDoc

IMPLEMENT_DYNCREATE(CModelingDoc, CDocument)

BEGIN_MESSAGE_MAP(CModelingDoc, CDocument)
	//{{AFX_MSG_MAP(CModelingDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CModelingDoc construction/destruction

CModelingDoc::CModelingDoc()
{
	// TODO: add one-time construction code here

}

CModelingDoc::~CModelingDoc()
{
}

BOOL CModelingDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CModelingDoc serialization

void CModelingDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CModelingDoc diagnostics

#ifdef _DEBUG
void CModelingDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CModelingDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CModelingDoc commands
