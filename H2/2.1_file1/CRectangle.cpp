#include"CRectangle.h"
#include<iostream>
using namespace std;
CRectangle::CRectangle(int width,int height) 
{
	this->width=width;
	this->height=height;
	cout<<"�����������"<<endl;
 
}

CRectangle::~CRectangle() 
{
	cout<<"�����������"<<endl; 

}


double CRectangle::circum()
{
	return 2 * (width + height);
	
}

double CRectangle::area() 
{
	return width * height;
}
