#include<iostream>
using namespace std;

int main()
{
	int no1,no2;
	string op;
	
	cout<<"Enter your First No:-";
	cin>>no1;
	
	cout<<"\nEnter your Second No:-";
	cin>>no2;
	
	cout<<"\n Please select your oprator between this(+,-,*,/)";
	
	cout<<"\n Enter your oprator:-";
	cin>>op;
	
	if(op=="+")
	{
		cout<<"Your Answer is:-"<<no1+no2;
	}
	else if(op=="-")
	{
		cout<<"Your Answer is:-"<<no1-no2;
	}
	else if(op=="*")
	{
		cout<<"Your Answer is:-"<<no1*no2;
	}
	else if(op=="/")
	{
		cout<<"Your Answer is:-"<<no1/no2;
	}
	else{
		cout<<"Please select right oprator";
	}
	return 0;
}
