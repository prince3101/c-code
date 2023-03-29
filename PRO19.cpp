// polymorphsion :- Ability to take more than one form...
#include<iostream>
using namespace std;

class Demo{
	public:
		void sum(int a)
		{
			cout<<"Your First method:-"<<a+a;
		}
		void sum(int a,int b)
		{
			cout<<"\nYour Second method:-"<<a+b;
		}
		void sum(int x,int y,int z)
		{
			cout<<"\nYour Third method:-"<<x+y+z;
		}
};
int main()
{
	Demo d;
	d.sum(9);
	d.sum(10,20);
	d.sum(10,20,30);
	return 0;
}
