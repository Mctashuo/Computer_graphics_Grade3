// tet.cpp : implementation file
//

#include "stdafx.h"
#include "test.h"
#include "tet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// tet dialog


tet::tet(CWnd* pParent /*=NULL*/)
	: CDialog(tet::IDD, pParent)
{
	//{{AFX_DATA_INIT(tet)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void tet::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(tet)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(tet, CDialog)
	//{{AFX_MSG_MAP(tet)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// tet message handlers
