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
	void SetEnviroment(CRGB);//������
	void SetDiffuse(CRGB);//������
	void SetMirror(CRGB);//���淴��
	void SetExp(double);//�߹�ָ��
public:
	CRGB M_Enviroment;
	CRGB M_Diffuse;
	CRGB M_Mirror;
	double M_Exp;

};

#endif // !defined(AFX_MATERIAL_H__CE648D28_16E3_46E4_9ED3_271DFB86A036__INCLUDED_)
