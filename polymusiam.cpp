#include<iostream>
using namespace std;

class A{
	public:
		void exam(int a)
		{
			cout << "hello";
		}
		void exam2(int a,int b)
		{
			cout << "\tmy mood off ";
		}
		void exam3(int a, int b,int c)
		{
			cout << "\t:(";
		}
};
int main()
{
	A a;
	a.exam(1);
	a.exam2(2,3);
	a.exam3(3,4,7);
	
	return 0;
}