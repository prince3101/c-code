1#include<iostream>
using namespace std;

class Op{
	public:
		void no()
		{
			int a,b;
			string op;
			cout << "Enter your no.1 : ";
			cin >> a;
			
			cout << "Enter Your no.2 : ";
			cin >> b;
			 
			cout << "\n please chose opreater(+,-,*,/)";
			
			cout << "\n enter operater : ";
			cin >> op;
			
			if(op=="+")
			{
				cout << "Your Addtion is :" << a+b;
			}
			else if(op=="-")
			{
				cout << "Your substraction is :" << a-b;
			}
			else if(op=="*")
			{
				cout << "Your multiple is :" << a*b;
			}
			else if(op=="/")
			{
				cout << "Your Divide is :" << a/b;
			}
			else
			{
				cout << "please select right opreater";
			}
		}
};
int main()
{
	Op o;
	o.no();
	
	return 0;
}