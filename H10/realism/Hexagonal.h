// Hexagonal.h: interface for the CHexagonal class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_HEXAGONAL_H__133591CF_C844_48A5_828A_196BDC3EA157__INCLUDED_)
#define AFX_HEXAGONAL_H__133591CF_C844_48A5_828A_196BDC3EA157__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P2.h"
#include "Face.h"
#include "Fill.h"
class CHexagonal  
{
public:
	CHexagonal();
	virtual ~CHexagonal();
	void ReadPointFlat();
	void ReadPointSmooth();
	void ReadFace();
	void DrawHexagonal(CDC *pDC,CP2 *);

public:
	int MaxX,MaxY;
	CP2 Pf[7],Ps[7];
	CFace F[6];
	bool Flag;
	CFill fill;

};

#endif // !defined(AFX_HEXAGONAL_H__133591CF_C844_48A5_828A_196BDC3EA157__INCLUDED_)
