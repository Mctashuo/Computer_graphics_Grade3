// Face.h: interface for the CFace class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_FACE_H__EE255C9B_4F1B_45D1_B99F_579EFC46E049__INCLUDED_)
#define AFX_FACE_H__EE255C9B_4F1B_45D1_B99F_579EFC46E049__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CFace  
{
public:
	int vN;		//��Ƭ�Ķ�����
	int vI[4];	//��Ƭ�Ķ�������
public:
	CFace();
	virtual ~CFace();	
	void setNum(int vN);	//������Ƭ�Ķ�����

};

#endif // !defined(AFX_FACE_H__EE255C9B_4F1B_45D1_B99F_579EFC46E049__INCLUDED_)
