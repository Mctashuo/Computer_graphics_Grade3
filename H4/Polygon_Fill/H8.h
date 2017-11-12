// H8.h: interface for the CH8 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H8_H__CDEC4E0D_8C89_473D_901C_7AC7967A20E5__INCLUDED_)
#define AFX_H8_H__CDEC4E0D_8C89_473D_901C_7AC7967A20E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Edge.h"
class CH8  :public CEdge
{
public:
	CH8();
	virtual ~CH8();
	void Fill(CDC *);
};

#endif // !defined(AFX_H8_H__CDEC4E0D_8C89_473D_901C_7AC7967A20E5__INCLUDED_)
