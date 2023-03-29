#include<iostream>
using namespace std;

class constDemo
{
	public:
		constDemo()
		{
			cout<<"This is from constructor\n";
		}
};
int main()
{
	constDemo c1;
	
	cout<<"Hello this is from main function";
	
	return 0;
	
}
 
