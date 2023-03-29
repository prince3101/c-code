#include<iostream>
using namespace std;
class Addition {
	public : 
		int a,b;
		void add()
		{
			cout << "\n Enter A : ";
			cin >> a;
			cout << "\n Enter B : ";
			cin >> b;
			cout << "\n Addition is : "<< a+b << "\n";
		}
};
class Substraction {
	public : 
		int c,d;
		void sub()
		{
			cout << "\n Enter C : ";
			cin >> c;
			cout << "\n Enter D : ";
			cin >> d;
			cout << "\n Substraction is : "<< c-d << "\n";
		}
};
class Multiplication {
	public : 
		int e,f;
		void mul()
		{
			cout << "\n Enter E : ";
			cin >> e;
			cout << "\n Enter F : ";
			cin >> f;
			cout << "\n Multiplication is : "<< e*f << "\n";
		}
};
class Division {
	public : 
		int g,h;
		void div()
		{
			cout << "\n Enter G : ";
			cin >> g;
			cout << "\n Enter H : ";
			cin >> h;
			cout << "\n Division is : "<< g/h << "\n";
		}
};
int main()
{
	Addition a1;
	a1.add();
	Substraction s1;
	s1.sub();
	Multiplication m1;
	m1.mul();
	Division d1;
	d1.div();
	
	return 0;
} 








