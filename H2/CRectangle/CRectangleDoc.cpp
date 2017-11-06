// CRectangleDoc.cpp : implementation of the CCRectangleDoc class
//

#include "stdafx.h"
#include "CRectangle.h"

#include "CRectangleDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCRectangleDoc

IMPLEMENT_DYNCREATE(CCRectangleDoc, CDocument)

BEGIN_MESSAGE_MAP(CCRectangleDoc, CDocument)
	//{{AFX_MSG_MAP(CCRectangleDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCRectangleDoc construction/destruction

CCRectangleDoc::CCRectangleDoc()
{
	// TODO: add one-time construction code here

}

CCRectangleDoc::~CCRectangleDoc()
{
}

BOOL CCRectangleDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCRectangleDoc serialization

void CCRectangleDoc::Serialize(CArchive& ar)
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
// CCRectangleDoc diagnostics

#ifdef _DEBUG
void CCRectangleDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCRectangleDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCRectangleDoc commands
