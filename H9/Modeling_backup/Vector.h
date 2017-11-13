// Vector.h: interface for the CVector class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_VECTOR_H__78853543_3A7A_42B3_A9FE_4CB258B3EDEE__INCLUDED_)
#define AFX_VECTOR_H__78853543_3A7A_42B3_A9FE_4CB258B3EDEE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P3.h"
class CVector  
{
public:
	CVector();
	CVector(CP3,CP3);

	virtual ~CVector();

	friend CVector operator * (CVector &,CVector &);
	friend double Dot(CVector &,CVector &);
	
public:
	double x,y,z;
};

#endif // !defined(AFX_VECTOR_H__78853543_3A7A_42B3_A9FE_4CB258B3EDEE__INCLUDED_)
