// H6.h: interface for the CH6 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H6_H__107FC67D_7857_4975_9851_03B42732A9E4__INCLUDED_)
#define AFX_H6_H__107FC67D_7857_4975_9851_03B42732A9E4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "HR.h"
class CH6  : public CHR
{
public:
	CH6();
	virtual ~CH6();
	void ReadPoint();
	void FillRect(CDC *pDC,CPoint *P,COLORREF c);
	public:
	CPoint P1[4],P2[4],P3[4],P4[4];
};

#endif // !defined(AFX_H6_H__107FC67D_7857_4975_9851_03B42732A9E4__INCLUDED_)
