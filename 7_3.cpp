#include<iostream>
using namespace std;
class point
{
	public:
	int x,y;
	void assign(int a, int b)
	{
		x=a;
		y=b;
	}
	void print()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};
class rectangle
{
	point v1,v2,v3,v4;
	public:
	rectangle()
	{
		v1.assign(0,0);
		v2.assign(0,1);
		v3.assign(1,1);
		v4.assign(1,0);
	}
	rectangle(point vl,point vr)
	{
		v1=vl;
		v2.assign(vl.x,vr.y);
		v3=vr;
		v4.assign(vr.x,vl.y);
	}
	void print()
	{
		v1.print();
		v2.print();
		v3.print();
		v4.print();
	}
	point sides()
	{
		point s;
		s.y=v2.y-v1.y;
		s.x=v4.x-v1.x;
		return s;
	}
	void area()
	{
		point s=sides();
		cout<<"Area is : "<<s.x*s.y;
	}
};
int main()
{
	point x,y;
	int xx,xy,yx,yy;
	cout<<"Coords of left bottom : ";
	cin>>xx>>xy;
	cout<<"\nCoords of right top : ";
	cin>>yx>>yy;
	cout<<endl;
	x.assign(xx,xy);
	y.assign(yx,yy);
	rectangle ob(x,y);
	ob.print();
	ob.area();
	return 1;
}
