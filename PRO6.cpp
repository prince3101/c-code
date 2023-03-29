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

int main()
{
	Test t1;
	t1.show();
	t1.a=100;
	
	cout<<"Ans is:"<<t1.a;
	return 0;
}
