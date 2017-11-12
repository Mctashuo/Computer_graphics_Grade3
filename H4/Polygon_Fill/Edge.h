// Edge.h: interface for the CEdge class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_EDGE_H__355976C4_B967_4F66_802F_5E5BD057EC3E__INCLUDED_)
#define AFX_EDGE_H__355976C4_B967_4F66_802F_5E5BD057EC3E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CEdge  
{
public:
	CEdge();
	virtual ~CEdge();
	virtual	void Fill(CDC *);//��亯��
	void DrawPolygon(CDC *);//���ƶ����
	void DrawFrame(CDC *pDC);//������Ӿ���	

public:
	int MaxX,MinX,MaxY,MinY;//���α߽��
	CPoint Point[7];//����ζ���
	COLORREF FillColor;//���ɫ
};

#endif // !defined(AFX_EDGE_H__355976C4_B967_4F66_802F_5E5BD057EC3E__INCLUDED_)
