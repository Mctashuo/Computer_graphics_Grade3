// Px.h: interface for the CPx class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PX_H__D76D59A6_EC5D_4414_ADA3_CD8DACC384D6__INCLUDED_)
#define AFX_PX_H__D76D59A6_EC5D_4414_ADA3_CD8DACC384D6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CPx  
{
public:
	CPx();
	CPx(double x,int y);
	virtual ~CPx();
	double x;
	int y;
};

#endif // !defined(AFX_PX_H__D76D59A6_EC5D_4414_ADA3_CD8DACC384D6__INCLUDED_)
