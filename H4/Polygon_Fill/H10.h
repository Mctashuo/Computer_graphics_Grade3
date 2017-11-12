// H10.h: interface for the CH10 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H10_H__837F99E3_CC37_4D7B_9FA4_121E3B6A9E38__INCLUDED_)
#define AFX_H10_H__837F99E3_CC37_4D7B_9FA4_121E3B6A9E38__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "PFill.h"

class CH10  :public CPFill
{
public:
	CH10();
	virtual ~CH10();
	void init(CDC *);
	void PolygonFill(CDC *pDC);
public:
	CPoint Point[7];
};

#endif // !defined(AFX_H10_H__837F99E3_CC37_4D7B_9FA4_121E3B6A9E38__INCLUDED_)
