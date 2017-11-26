// Lighting.h: interface for the CLighting class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_LIGHTING_H__6B97AE81_E0B1_4036_B451_3094A98F335D__INCLUDED_)
#define AFX_LIGHTING_H__6B97AE81_E0B1_4036_B451_3094A98F335D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "P3.h"
#include "Vector.h"
#include "Material.h"
#include "Light.h"
class CLighting  
{
public:
	CLighting();
	virtual ~CLighting();
	CLighting(int);

	CRGB Lighting(CP3,CP3,CVector,CMaterial *);//光照	
public:
	int LightNum;//光源数量
	CLight *Light;//光源数组
	CRGB Enviroment;//环境光
};

#endif // !defined(AFX_LIGHTING_H__6B97AE81_E0B1_4036_B451_3094A98F335D__INCLUDED_)
