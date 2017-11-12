// H.h: interface for the CH class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H_H__B155A7C0_4504_4FCA_BD21_B37C4049E875__INCLUDED_)
#define AFX_H_H__B155A7C0_4504_4FCA_BD21_B37C4049E875__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CH  
{
public:
	CH();
	virtual ~CH();
	virtual void ReadPoint();
	virtual void DrawTria(CDC *,CPoint *);
	virtual void FillTria(CDC *,CPoint *);
public:
	CPoint P1[3],P2[3],P3[3],P4[3];
};

#endif // !defined(AFX_H_H__B155A7C0_4504_4FCA_BD21_B37C4049E875__INCLUDED_)
