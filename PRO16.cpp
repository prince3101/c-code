#include<iostream>
using namespace std;

class personal{ //1// Full name,mobile//2// email,password
		private:
			void emailpass(string email,int pass)
			{
				cout<<"\n<<<<<<< Your Email pass Details>>>>>>>";
				cout<<"\n Your Email is :-"<<email;
				cout<<"\n Your Pass is:-"<<pass;
			}
		public:
			void getInfo(string name,int mobile)
			{
				cout<<"Your name is:-"<<name;
				cout<<"\nYour mobile is:-"<<mobile;
			}
};
class Education : public personal{ //college name,marks
		public:
			void getEducation(string cname,int marks)
			{
				cout<<"\n <<<<<<<Your College details>>>>>>>";
				cout<<"\n Your College Name:-"<<cname;
				cout<<"\n Your Marks is:-"<<marks;
			}
};
int main()
{
	Education e;
	e.getInfo("Cloud",987654321);
	//e.emailpass("abc@gmail.com",987654321);
	e.getEducation("Gujarat University",55);
	
	return 0;
}
