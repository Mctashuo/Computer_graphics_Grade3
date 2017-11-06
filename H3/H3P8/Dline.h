#include "P2.h"
#include "RGB.h"
// Dline.h: interface for the CDline class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_DLINE_H__4AC097A6_C026_40D5_80E5_F63BD4ABF001__INCLUDED_)
#define AFX_DLINE_H__4AC097A6_C026_40D5_80E5_F63BD4ABF001__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CDline  
{
public:
	CDline();
	virtual ~CDline();
public:

	void MoveTo(CDC *,CP2);
	void MoveTo(CDC *,double,double);
	void LineTo(CDC *,CP2);
	void LineTo(CDC *,double,double);
	COLORREF getColor(double ,double ,double ,CRGB ,CRGB );
public:
	CP2 P0;
	CP2 P1;
};

#endif // !defined(AFX_DLINE_H__4AC097A6_C026_40D5_80E5_F63BD4ABF001__INCLUDED_)
