#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
	void assign()
	{
		cin>>x>>y;
	}
	void print()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
};
int main()
{
	point ob;
	ob.assign();
	ob.print();
	return 1;
}
