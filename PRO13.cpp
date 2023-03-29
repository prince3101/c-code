#include<iostream>
using namespace std;

class college
{
	public:
		void collegeName(string cname)
		{
			cout<<"Your College name:"<<cname;
		}
};
class student :public college
{
	public:
		void showEnroll(int enroll)
		{
			cout<<"Your Enrollment ID:"<<enroll;
		}
};
class Info :public student
{
	public:
		void showName(string name)
		{
			cout<<"Your Name is:"<<name;
		}
};
int main()
{
	Info f;
	f.collegeName("Gujarat University");
	f.showEnroll(424234);
	f.showName("Cloud & Application");
	
	return 0;
}
