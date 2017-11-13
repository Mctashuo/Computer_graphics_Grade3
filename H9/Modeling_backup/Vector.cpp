// Vector.cpp: implementation of the CVector class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Modeling.h"
#include "Vector.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CVector::CVector()
{

}

CVector::CVector(CP3 p1,CP3 p2)
{
	x = p2.x - p1.x;
	y = p2.y - p1.y;
	z = p2.z - p1.z;
}
CVector::~CVector()
{

}


CVector operator *(CVector &v1,CVector &v2)
{
	CVector vector;
	vector.x=v1.y*v2.z-v1.z*v2.y;
	vector.y=v1.z*v2.x-v1.x*v2.z;
	vector.z=v1.x*v2.y-v1.y*v2.x;
	return vector;
}

double Dot(CVector &v1,CVector &v2)//矢量的点积
{
	return(v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
}