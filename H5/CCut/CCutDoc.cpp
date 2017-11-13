// CCutDoc.cpp : implementation of the CCCutDoc class
//

#include "stdafx.h"
#include "CCut.h"

#include "CCutDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCCutDoc

IMPLEMENT_DYNCREATE(CCCutDoc, CDocument)

BEGIN_MESSAGE_MAP(CCCutDoc, CDocument)
	//{{AFX_MSG_MAP(CCCutDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCCutDoc construction/destruction

CCCutDoc::CCCutDoc()
{
	// TODO: add one-time construction code here

}

CCCutDoc::~CCCutDoc()
{
}

BOOL CCCutDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CCCutDoc serialization

void CCCutDoc::Serialize(CArchive& ar)
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
// CCCutDoc diagnostics

#ifdef _DEBUG
void CCCutDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CCCutDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CCCutDoc commands
