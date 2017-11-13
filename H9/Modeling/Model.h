// Model.h: interface for the CModel class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MODEL_H__C2DC2A60_946D_49B3_911E_CE9230950628__INCLUDED_)
#define AFX_MODEL_H__C2DC2A60_946D_49B3_911E_CE9230950628__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include "P3.h"
#include "Face.h"
#include "P2.h"
class CModel  
{
public:


	CModel();
	virtual ~CModel();

	virtual void ReadVertex();	//读取点表
	
	virtual void ReadFace();	//读取面表
	
	virtual void DrawBuffer(CDC *,CRect);

	virtual void DrawObject(CDC *pDC);
public:


};

#endif // !defined(AFX_MODEL_H__C2DC2A60_946D_49B3_911E_CE9230950628__INCLUDED_)
