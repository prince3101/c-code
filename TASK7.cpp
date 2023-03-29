#include<iostream>
using namespace std;
class log
{
	public:
		void login()
		{
			int option ,a,b;
			string email,pass,name,stream,ope;
			cout<<"\n (1)login";
			cout<<"\n (2)New Registration";
			cout<<"\n Enter your value:-";
			cin>>option;
			if(option == 1)
			{
				cout<<"============LOGIN============";
				cout<<"\n Enter your Email:-";
				cin>>email;
				cout<<"\n Enter your Pass:-";
				cin>>pass;
				if(email=="admin@gmail.com"&&pass=="admin@123")
				{
					cout<<"\n You are login Successfull";
				}
				else
				{
					cout<<"It is not match";
				}
				cout<<"\n Enter your First value:-";
				cin>>a;
				cout<<"\n Enter your Second value:-";
				cin>>b;
				cout<<"\n please select your oprator between this(+,-,*,/)";
				cin>>ope;
				if(ope=="+")
				{
					cout<<"\n Your addtion is:-"<<a+b;
				}
				else if(ope=="-")
				{
					cout<<"\n Your substraction is:-"<<a-b;
				}
				else if(ope=="*")
				{
					cout<<"\n Your multiplication is:-"<<a*b;
				}
				else if(ope=="/")
				{
					cout<<"\n Your division is:-"<<a/b;
				}
				else
				{
					cout<<"\n You are us wrong oprator";
				}
			}
			else if(option==2)
			{
				cout<<"==========NEW REGISTRATION===========";
				cout<<"\n Enter your name:-";
				cin>>name;
				cout<<"\n Enter your stream:-";
				cin>>stream;
				cout<<"\n Enter your Email:-";
				cin>>email;
				cout<<"\n Enter your password:-";
				cin>>pass;
				cout<<"============LOGIN============";
				cout<<"\n Enter your Email:-";
				cin>>email;
				cout<<"\n Enter your Pass:-";
				cin>>pass;
				if(email=="admin@gmail.com"&&pass=="admin@123")
				{
					cout<<"\n You are login Successfull";
				}
				else
				{
					cout<<"It is not match";
				}
				cout<<"\n Enter your First value:-";
				cin>>a;
				cout<<"\n Enter your Second value:-";
				cin>>b;
				cout<<"\n please select your oprator between this(+,-,*,/)";
				cin>>ope;
				if(ope=="+")
				{
					cout<<"\n Your addtion is:-"<<a+b;
				}
				else if(ope=="-")
				{
					cout<<"\n Your substraction is:-"<<a-b;
				}
				else if(ope=="*")
				{
					cout<<"\n Your multiplication is:-"<<a*b;
				}
				else if(ope=="/")
				{
					cout<<"\n Your division is:-"<<a/b;
				}
				else
				{
					cout<<"\n You are us wrong oprator";
				}
			}
			else
			{
				cout<<"\n You are choose wrong number";
			}
		}
};
int main()
{
	log a1;
	a1.login();
	return 0;
}
