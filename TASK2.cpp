#include<iostream>

using namespace std;

int main()
{
	int bsalary,pf,pa,tax,ma,da,salary;
	
	cout<<"Enter your Basic salary:";
	cin>>bsalary;
	
	pf=bsalary*3/100;
	cout<<"Your pf is:"<<pf;
	
	pa=bsalary*5/100;
	cout<<"Your pa is:"<<pa;
	
	tax=bsalary*10/100;
	cout<<"Your tax is:"<<tax;
	
	ma=bsalary*12/100;
	cout<<"Your ma is:"<<ma;
	
	da=bsalary*9/100;
	cout<<"Your da is:"<<da;

	salary=pf+pa+da-(tax+ma);
	cout<<"Your salary is:"<<salary;
	
	return 0;	
	
}
