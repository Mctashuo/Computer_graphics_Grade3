// Elipse.h: interface for the CElipse class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ELIPSE_H__307DE0DC_97F8_40F1_9721_1D2769F41BDD__INCLUDED_)
#define AFX_ELIPSE_H__307DE0DC_97F8_40F1_9721_1D2769F41BDD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CElipse  
{
public:
	CElipse();
	virtual ~CElipse();
	void drawElipse(CDC *pDC);
	void draw(CDC *pDC,double x,double y,double e);
public:
	int a;
	int b;

};

#endif // !defined(AFX_ELIPSE_H__307DE0DC_97F8_40F1_9721_1D2769F41BDD__INCLUDED_)
