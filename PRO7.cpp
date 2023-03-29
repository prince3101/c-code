#include<iostream>

using namespace std;

class Test{
	
	public:
		int a=50,b=30;
		
		void show()
		{
			cout<<" Your Addition is:"<<a+b;
		}
};
class sub{
	public:
		int c=10,d=5;
		
		void substraction()
		{
			cout<<" Your Substraction is:"<<c-d;
		}
};

int main()
{
	Test t1;
	t1.show();
	
	sub s1;
	s1.substraction();
	
	return 0;
}
