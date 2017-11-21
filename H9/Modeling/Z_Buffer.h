// Z_Buffer.h: interface for the CZ_Buffer class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_Z_BUFFER_H__4F0A5C95_8B89_407F_AB66_55F6C9BE36E6__INCLUDED_)
#define AFX_Z_BUFFER_H__4F0A5C95_8B89_407F_AB66_55F6C9BE36E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "Model.h"

#include "Face.h"
#include "P3.h"
#include "AET.h"
#include "Bucket.h"
#include "RGB.h"
class CZ_Buffer  : public CModel
{

public:
	CP3 Pi[3][8],PN[3][8];
	CFace F[6];


	int PNum;	//顶点个数
	CP3 *P;		//顶点坐标数组
	CAET *HeadE,*CurrentE,*Edge;	//有效边表
	CBucket *HeadB,*CurrentB;	//桶表
	COLORREF Color;

	void InitDeepBuffer(int,int,double);

	int Width,Height;

	double **ZB;

public:
	CZ_Buffer();
	virtual ~CZ_Buffer();
	
	void ReadVertex();

	void ReadFace();

	void DrawObject(CDC *pDC);

	CRGB Interpolation(double t,double t1,double t2,CRGB c1,CRGB c2);
	void SetPoint(CP3 *,int);
	void CreateBucket();
	void CreateEdge();
	void AddEt(CAET *NewEdge);
	void EtOrder();
	void Gouraud(CDC *pDC);
	void init();

};

#endif // !defined(AFX_Z_BUFFER_H__4F0A5C95_8B89_407F_AB66_55F6C9BE36E6__INCLUDED_)
