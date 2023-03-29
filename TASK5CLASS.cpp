#include<iostream>
using namespace std;		

class Datademo
{
	public:
		Datademo()
		{
			
			string no;
			cout<<"\n Enter your Employee id:-";
			cin>> no;
	
			string name;
			cout<<"\n Enter your First name:-";
			cin>> name;
	
			string name1;
			cout<<"\n Enter your Last name:-";
			cin>> name1;
	
			string mobile;
			cout<<"\n Enter your Mobile No:-";
			cin>> mobile;
	
			string desig;
			cout<<"\n Enter your Designation:-";
			cin>>desig;
	
			string salary;
			cout<<"\n Enter your Salary:-";
			cin>>salary;
	
			string address;
			cout<<"\n Enter your Address:-";
			cin>> address;
	
			string Bdate;
			cout<<"\n Enter your Birth date:-";
			cin>> Bdate;
	
			string email;
			cout<<"\n Enter your Email Address:-";
			cin>>email;
	
			cout<<"\n Your Employee ID:-"<<no;
			cout<<"\n Your First name:-"<<name;
			cout<<"\n Your Last name:-"<<name1;
			cout<<"\n Your Mobile No:-"<<mobile;
			cout<<"\n Your Designation:-"<<desig;
			cout<<"\n Your Salary :-"<<salary;
			cout<<"\n Your Address :-"<<address;
			cout<<"\n Your Birthdate :-"<<Bdate;
			cout<<"\n Your Email Address :-"<<email;
		}
};
int main()
{
	Datademo c1;
	
	return 0;
}
