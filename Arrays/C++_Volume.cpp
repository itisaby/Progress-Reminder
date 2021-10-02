#include <iostream>
using namespace std;

float vol_sphere(int r1)
{
	float vol=((4*3.14*r1*r1*r1)/3);
	return vol;
}
float vol_cuboid(int l1,int b1, int h1)
{
	float vol= l1*b1*h1;
	return vol;
}
float vol_cylinder(int r1,int h1)
{
	float vol=(3.14*r1*r1*h1);
	return vol;
}

int main()
{
	int R,h,a,r,L,B,H;
	cout<<"Enter the value of radius of sphere"<<endl;
	cin>>R;
	cout<<"Enter the value of height and radius of cylinder"<<endl;
	cin>>r>>h;
	cout<<"Enter the value of length,breadth and ht of the cuboid"<<endl;
	cin>>L>>B>>H;
	
		cout<<"The volume of sphere is:"<<vol_sphere(R)<<endl;
		cout<<"The volume of cuboid is:"<<vol_cuboid(L,B,H)<<endl;
		cout<<"The volume of cylinder is:"<<vol_cylinder(r,h)<<endl;

return 0;
}