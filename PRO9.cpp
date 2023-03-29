#include<iostream>
using namespace std;

class ConstDemo
{
	public:
		ConstDemo() //without arguement constructor
		{
			cout<<"This is from constructor\n";
		}

		~ConstDemo() //destructor
		{
			cout<<"Hello this is from Destructor";
		}		

		void show() //Function
		{	
			cout<<"Hello this is from function\n";
		}
};

int main()
{
	ConstDemo c1;
	c1.show();
	
	return 0;
}

