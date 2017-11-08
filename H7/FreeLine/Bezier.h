// Bezier.h: interface for the CBezier class.
//
//////////////////////////////////////////////////////////////////////
#include "P1.h"
#if !defined(AFX_BEZIER_H__7B9E3CFA_44F1_4F17_908D_331BE6851041__INCLUDED_)
#define AFX_BEZIER_H__7B9E3CFA_44F1_4F17_908D_331BE6851041__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBezier
{
public:
	CBezier();
	virtual ~CBezier();
	void DrawBezier(CDC *,CRect );
	//void test(CDC *);
	void Bezier3(CDC *);
public:
	BOOL LeftCheck;	//����Ƿ���
	BOOL MoveCheck;	//����ƶ����
	
	int Point;	//���ѡ�еĵ�
	//int P[4][2];	//���㼯
	CP1 P[4];
};

#endif // !defined(AFX_BEZIER_H__7B9E3CFA_44F1_4F17_908D_331BE6851041__INCLUDED_)
