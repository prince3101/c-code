#include<iostream>
using namespace std;

int main()
{
	string email,pass;
	
	cout<<"Enter Your Email id:-";
	cin>> email;
	
	cout<<"Enter your Password:-";
	cin>> pass;
	
	if(email=="admin@gmail.com" && pass=="admin@123")
	{
		cout<<"Sucessfull login....!";
	}
	else{
		cout<<"Credential id not match...!";
	}
	return 0;
}
