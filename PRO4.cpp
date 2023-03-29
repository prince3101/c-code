#include<iostream>

using namespace std;

int main()
{
	int sub1,sub2,sub3,sub4,sub5,sub6;
	
	cout<<"Enter your sub1:";
	cin>>sub1;
	
	cout<<"Enter your sub2:";
	cin>>sub2;
	
	cout<<"Enter your sub3:";
	cin>>sub3;
	
	cout<<"Enter your sub4:";
	cin>>sub4;
	
	cout<<"Enter your sub5:";
	cin>>sub5;
	
	cout<<"Enter your sub6:";
	cin>>sub6;
	
	int total=sub1+sub2+sub3+sub4+sub5+sub6;
	cout<<"Your total Ans is:"<<total;
	
	int percentage= total*100/600;
	cout<<"\nYour percentage is:-"<<percentage;
	if(sub1>=33 && sub2>=33 && sub3>=33 && sub4>=33 && sub5>=33 && sub6>=33)
	{
		if(percentage>80)
		{
			cout<<"\n You have A grade";
		}
		else
		{
			if(percentage>65)
			{
				cout<<"\n You have B garde";
			}
			else
			{
				cout<<"\n You have C grade";
			}
		}
	}
	else
	{
		cout<<"\nYou are FAIL";
	}
	return 0;
}
