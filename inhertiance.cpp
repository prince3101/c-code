#include<iostream>
using namespace std;
 
class A{
	public:
		string md;
		void mood()
		{
			cout << "Your Mood is :";
			cin >> md;
			
			cout << "Your mood :" << md;
		}
};
class B:public A{
	public:
		string yes;
		void name()
		{
			cout << "Your ans :";
			cin >> yes;
			
			cout << "Your mood :" << yes;
		}
};
class c:public B{
	string yes;
		void name()
		{
			cout << "Your ans :";
			cin >> yes;
			
			cout << "Your mood :" << yes;
		}
	
};
int main()
{
	B b;
	b.mood();
	b.name();
	b.name();
	
	return 0;
}