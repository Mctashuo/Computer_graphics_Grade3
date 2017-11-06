// dialog.cpp : implementation file
//

#include "stdafx.h"
#include "4circle.h"
#include "dialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// dialog dialog


dialog::dialog(CWnd* pParent /*=NULL*/)
	: CDialog(dialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(dialog)
	m_bradius = 0;
	m_sradius = 0;
	//}}AFX_DATA_INIT
}


void dialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(dialog)
	DDX_Text(pDX, IDC_EDIT_BRADIUS, m_bradius);
	DDX_Text(pDX, IDC_EDIT_SRADIUS, m_sradius);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(dialog, CDialog)
	//{{AFX_MSG_MAP(dialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// dialog message handlers
