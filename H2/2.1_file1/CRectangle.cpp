#include"CRectangle.h"
#include<iostream>
using namespace std;
CRectangle::CRectangle(int width,int height) 
{
	this->width=width;
	this->height=height;
	cout<<"建立基类对象"<<endl;
 
}

CRectangle::~CRectangle() 
{
	cout<<"撤销基类对象"<<endl; 

}


double CRectangle::circum()
{
	return 2 * (width + height);
	
}

double CRectangle::area() 
{
	return width * height;
}
