// Vector.cpp: implementation of the CVector class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "realism.h"
#include "Vector.h"
#include "cmath"
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


double CVector::X()
{
	return this->x;
}

double CVector::Y()
{
	return this->y;
}

double CVector::Z()
{
	return this->z;
}

CVector CVector::Unit()//��λʸ��
{
	CVector vector;
	double product=sqrt(this->x*this->x+this->y*this->y+this->z*this->z);
	if(product<1e-5)
		product=1.0;
	vector.x=this->x/product;
	vector.y=this->y/product;
	vector.z=this->z/product;
	return vector;
}

double CVector::Mold()//ʸ����ģ
{
	double product=sqrt(this->x*this->x+this->y*this->y+this->z*this->z);
	return product;
}

double Dot(CVector &v1,CVector &v2)//ʸ���ĵ��
{
	return(v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
}

CVector operator +(CVector &v1,CVector &v2)//ʸ���ĺ�
{	
	CVector vector;
	vector.x=v1.x+v2.x;
	vector.y=v1.y+v2.y;
	vector.z=v1.z+v2.z;
	return vector;
}
CVector operator -(CVector &v1,CVector &v2)//ʸ���Ĳ�
{	
	CVector vector;
	vector.x=v1.x-v2.x;
	vector.y=v1.y-v2.y;
	vector.z=v1.z-v2.z;
	return vector;
}

CVector operator *(CVector &v,double k)//ʸ���ͳ����Ļ�
{	
	CVector vector;
	vector.x=v.x*k;
	vector.y=v.y*k;
	vector.z=v.z*k;
	return vector;
}

CVector operator /(CVector &v,double k)//ʸ������
{
	CVector vector;
	vector.x=v.x/k;
	vector.y=v.y/k;
	vector.z=v.z/k;
	return vector;
}

CVector operator * (CVector &v1,CVector &v2)//ʸ���Ĳ��
{
	CVector vector;
	vector.x=v1.y*v2.z-v1.z*v2.y;
	vector.y=v1.z*v2.x-v1.x*v2.z;
	vector.z=v1.x*v2.y-v1.y*v2.x;
	return vector;
}