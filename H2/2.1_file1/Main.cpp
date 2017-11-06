#include"CRectangle.cpp"
#include"Cuboid.cpp"
int main()
{
	CCuboid * pCuboid = new CCuboid(30,20,100);
	cout<<"长方体的体积为："<<pCuboid->volume()<<endl;
	delete pCuboid; 
}
