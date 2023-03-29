#include<iostream>
using namespace std;

class Constparameter
{
	public:
		
		Constparameter (int a, int b) // with Argument
		{
			cout<<"Your Addition is:"<<a+b;
		}
};
int main()
{
	Constparameter cd1(10,30);
	
	cout<<"\n This is main function";
	
	return 0;
}
