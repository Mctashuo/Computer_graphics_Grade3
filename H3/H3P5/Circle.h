// Circle.h: interface for the CCircle class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_CIRCLE_H__0B6E605E_54C8_4812_A0D1_68073354F3E5__INCLUDED_)
#define AFX_CIRCLE_H__0B6E605E_54C8_4812_A0D1_68073354F3E5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CCircle  
{
public:
	CCircle();
	virtual ~CCircle();
	void drawCircle(CDC *pDC);
	void draw(CDC *pDC,double,double,double);
public:
	int radius;

};

#endif // !defined(AFX_CIRCLE_H__0B6E605E_54C8_4812_A0D1_68073354F3E5__INCLUDED_)
