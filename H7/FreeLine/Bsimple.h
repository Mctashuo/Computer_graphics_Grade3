// Bsimple.h: interface for the CBsimple class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BSIMPLE_H__4B1026FE_C02E_486F_A3E6_DF67E13E5CDB__INCLUDED_)
#define AFX_BSIMPLE_H__4B1026FE_C02E_486F_A3E6_DF67E13E5CDB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CBsimple  
{
public:
	CBsimple();
	virtual ~CBsimple();

public:

	bool start;	//��ʼ�����
	CPoint *point;	//����
	int pointCount; //�������

public:
	void DrawBsimple();	//draw Bsimple Line
	void ConnectPoint(CDC *pDC);	//���Ӷ���
	void DrawPrinciples();	//draw ����Principles
	void RButton();
	void LButton(CPoint,CDC *pDC);


};

#endif // !defined(AFX_BSIMPLE_H__4B1026FE_C02E_486F_A3E6_DF67E13E5CDB__INCLUDED_)
