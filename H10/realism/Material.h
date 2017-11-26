// Material.h: interface for the CMaterial class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_MATERIAL_H__CE648D28_16E3_46E4_9ED3_271DFB86A036__INCLUDED_)
#define AFX_MATERIAL_H__CE648D28_16E3_46E4_9ED3_271DFB86A036__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "RGB.h"

class CMaterial  
{
public:
	CMaterial();
	void SetEnviroment(CRGB);//环境光
	void SetDiffuse(CRGB);//漫反射
	void SetMirror(CRGB);//镜面反射
	void SetExp(double);//高光指数
public:
	CRGB M_Enviroment;
	CRGB M_Diffuse;
	CRGB M_Mirror;
	double M_Exp;

};

#endif // !defined(AFX_MATERIAL_H__CE648D28_16E3_46E4_9ED3_271DFB86A036__INCLUDED_)
