// FreeLineDoc.cpp : implementation of the CFreeLineDoc class
//

#include "stdafx.h"
#include "FreeLine.h"

#include "FreeLineDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CFreeLineDoc

IMPLEMENT_DYNCREATE(CFreeLineDoc, CDocument)

BEGIN_MESSAGE_MAP(CFreeLineDoc, CDocument)
	//{{AFX_MSG_MAP(CFreeLineDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CFreeLineDoc construction/destruction

CFreeLineDoc::CFreeLineDoc()
{
	// TODO: add one-time construction code here

}

CFreeLineDoc::~CFreeLineDoc()
{
}

BOOL CFreeLineDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CFreeLineDoc serialization

void CFreeLineDoc::Serialize(CArchive& ar)
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
// CFreeLineDoc diagnostics

#ifdef _DEBUG
void CFreeLineDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CFreeLineDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CFreeLineDoc commands
