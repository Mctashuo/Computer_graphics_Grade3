// realismDoc.cpp : implementation of the CRealismDoc class
//

#include "stdafx.h"
#include "realism.h"

#include "realismDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRealismDoc

IMPLEMENT_DYNCREATE(CRealismDoc, CDocument)

BEGIN_MESSAGE_MAP(CRealismDoc, CDocument)
	//{{AFX_MSG_MAP(CRealismDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRealismDoc construction/destruction

CRealismDoc::CRealismDoc()
{
	// TODO: add one-time construction code here

}

CRealismDoc::~CRealismDoc()
{
}

BOOL CRealismDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CRealismDoc serialization

void CRealismDoc::Serialize(CArchive& ar)
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
// CRealismDoc diagnostics

#ifdef _DEBUG
void CRealismDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CRealismDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CRealismDoc commands
