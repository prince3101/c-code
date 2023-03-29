#include<iostream>
using namespace std;

class Addition
{
	public:
		
		Addition(int a,int b)
		{
			cout << "\nYour Addition is :- " << a+b;
		}
};

class Substriction
{
	public:
		
		Substriction(int a,int b)
		{
			cout << "\nYour Substriction is :- " << a-b;	
		}	
};

class Multipication
{
	public:
		
		Multipication(int a,int b)
		{
			cout << "\nYour Multipication is :- " << a*b;
		}
};

class Division
{
	public:
			Division(int a,int b)
		{
			cout << "\nYour Division is :- " << a/b;
		}
};

int main()
{
	int a,b;
	
	cout << "Enter the First Value = ";
	cin >> a;
			
	cout << "Enter the Seconde Value = ";
	cin >> b;
	
	Addition a1(a,b);
	
	Substriction s1(a,b);
	
	Multipication m1(a,b);
	
	Division d1(a,b);
	
	return 0;
}
