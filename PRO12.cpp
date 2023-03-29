#include<iostream>
using namespace std;

class A
{
	public:
		void showFname(string fname)
		{
			cout<<"Your First Name is:"<<fname;
			
		}
		void showLname(string lname)
		{
			cout<<"Your Last Name is:"<<lname;
		}
};
class B: public A
{
	public:
		void showAge(int age)
		{
			cout<<"Your Age is:"<<age;
		}
		void showStream(string stream)
		{
			cout<<"Your Stream is:"<<stream;
		}
};
int main()
{
	//A a;
	//a.showFname("Cloud");
	//a.showLname("Application");
	
	B b;
	b.showFname("Cloud");
	b.showLname("Application");
	b.showAge(3);
	b.showStream("Network Security");
	 
	return 0;
}
