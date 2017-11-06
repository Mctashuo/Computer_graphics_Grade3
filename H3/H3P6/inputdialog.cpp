// inputdialog.cpp : implementation file
//

#include "stdafx.h"
#include "H3P2.h"
#include "inputdialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Cinputdialog dialog


Cinputdialog::Cinputdialog(CWnd* pParent /*=NULL*/)
	: CDialog(Cinputdialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(Cinputdialog)
	m_a = 0;
	m_b = 0;
	//}}AFX_DATA_INIT
}


void Cinputdialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(Cinputdialog)
	DDX_Text(pDX, IDC_EDIT_A, m_a);
	DDX_Text(pDX, IDC_EDIT_B, m_b);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(Cinputdialog, CDialog)
	//{{AFX_MSG_MAP(Cinputdialog)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Cinputdialog message handlers
