// H4.h: interface for the CH4 class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_H4_H__9D7633F2_6309_4A43_A8BC_35DAD551AA72__INCLUDED_)
#define AFX_H4_H__9D7633F2_6309_4A43_A8BC_35DAD551AA72__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Face.h"
class CH4  
{
public:
	CH4();
	virtual ~CH4();
	void ReadPoint();//���붥�㺯��
	void ReadFace();//�����溯��
	void DrawPolygon(CDC *pDC,CRect Rect);//���ƶ����庯��
	void Project(const double P3[][4],double P2[][3],const int);//б�Ȳ�ͶӰ�任
	void MultiMatrix(double P[][4],int T[][4]);//�������
	void Line(CDC *,CPoint p[],int num);//���ƶ���α��ߺ���
	void ClearMatrix(int A[4][4]);//���������
	void DrawVView(CDC *pDC,CRect Rect);//��������ͼ����
	void DrawHView(CDC *pDC,CRect Rect);//���Ƹ���ͼ����
	void DrawWView(CDC *pDC,CRect Rect);//��������ͼ����
	void DrawTriView(CDC *pDC,CRect Rect);//��������ͼ����
	void init(CDC *pDC);
public:
	int MaxX,MaxY;//��Ļx��y���������

	double P3[10][4];//��ά����
	double P2[10][3];//��ά����
	CFace F[7];//���
	int TV[4][4];//����ͼ�任����
	int TH[4][4];//����ͼ�任����
	int TW[4][4];//����ͼ�任����
	double Tri[10][4];//����ͼ�任��ľ���
};

#endif // !defined(AFX_H4_H__9D7633F2_6309_4A43_A8BC_35DAD551AA72__INCLUDED_)
