// Menger.h: interface for the CMenger class.
//
//////////////////////////////////////////////////////////////////////




#if !defined(AFX_MENGER_H__5E756D06_6537_469A_8EE4_B787CA316601__INCLUDED_)
#define AFX_MENGER_H__5E756D06_6537_469A_8EE4_B787CA316601__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P1.h"
class CMenger  
{
public:
	CMenger();
	virtual ~CMenger();
	void DrawMenger(CDC *pDC);
	void Cube_f(CDC *,CP1,double);	//绘制前面
	void Cube_t(CDC *,CP1,double);	//绘制顶面
	void Cube_r(CDC *,CP1,double);	//绘制右面

	void Menger(CDC *,int,CP1,double);	//
protected:
	int n;
	double distance;
};

#endif // !defined(AFX_MENGER_H__5E756D06_6537_469A_8EE4_B787CA316601__INCLUDED_)
