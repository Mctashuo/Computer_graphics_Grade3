// H2.h: interface for the H2 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H2_H__7996B621_ED8B_44C2_9718_594857812272__INCLUDED_)
#define AFX_H2_H__7996B621_ED8B_44C2_9718_594857812272__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Fill.h"
#include "Px.h"
class H2  
{
public:
	H2();
	virtual ~H2();
	
	void ReadPoint();
	void DrawRect(CDC *,CPoint *);
	void FillRect(CDC *pDC,CPoint *P);

public:
	CPoint P1[4],P2[4];

};

#endif // !defined(AFX_H2_H__7996B621_ED8B_44C2_9718_594857812272__INCLUDED_)
