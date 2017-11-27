// Vector.h: interface for the CVector class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_VECTOR_H__BC661A7D_4526_41C9_9C5C_C4BD9C00D6AC__INCLUDED_)
#define AFX_VECTOR_H__BC661A7D_4526_41C9_9C5C_C4BD9C00D6AC__INCLUDED_

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

	CVector Unit();//��λʸ��
	double X();//ʸ����x����
	double Y();//ʸ����y����
	double Z();//ʸ����z����
	double Mold();//ʸ����ģ
	friend CVector operator +(CVector &,CVector &);//ʸ����
	friend CVector operator -(CVector &,CVector &);//ʸ����
	friend CVector operator *(CVector &,double);//ʸ������
	friend CVector operator * (CVector &v1,CVector &v2);
	friend CVector operator /(CVector &,double);//ʸ������
	friend double Dot(CVector &,CVector &);//ʸ�����
	
public:
	double x,y,z;
};

#endif // !defined(AFX_VECTOR_H__BC661A7D_4526_41C9_9C5C_C4BD9C00D6AC__INCLUDED_)
