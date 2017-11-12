// HR.h: interface for the CHR class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HR_H__0A75AF57_55A9_4988_A1BC_94B4B5D12092__INCLUDED_)
#define AFX_HR_H__0A75AF57_55A9_4988_A1BC_94B4B5D12092__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Fill.h"
class CHR  
{
public:
	CHR();
	virtual ~CHR();
	virtual void ReadPoint();
	virtual void DrawRect(CDC *,CPoint *);
	virtual void FillRect(CDC *pDC,CPoint *P);

public:
	CPoint P1[4],P2[4];
};

#endif // !defined(AFX_HR_H__0A75AF57_55A9_4988_A1BC_94B4B5D12092__INCLUDED_)
