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
	virtual	void Fill(CDC *);//填充函数
	void DrawPolygon(CDC *);//绘制多边形
	void DrawFrame(CDC *pDC);//绘制外接矩形	

public:
	int MaxX,MinX,MaxY,MinY;//矩形边界点
	CPoint Point[7];//多边形顶点
	COLORREF FillColor;//填充色
};

#endif // !defined(AFX_EDGE_H__355976C4_B967_4F66_802F_5E5BD057EC3E__INCLUDED_)
