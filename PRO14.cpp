#include<iostream>
using namespace std;

class A{
	public:
		void showA()
		{
			cout<<"This is from A class";
		}
};
class B{
	public:
		void showB()
		{
			cout<<"This is from B class";
		}
};
class C: public B,public A{
	public:
		void showC()
		{
			cout<<"This is from C class";
		}
};
int main()
{
	C c;
	c.showC();
	c.showA();
	c.showB();
	
	return 0;
	
}
