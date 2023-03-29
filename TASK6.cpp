#include<iostream>
using namespace std;
   class  A {
      public:
           string sid;
           string sname,sdob,semail,saddress;
             void stu()
        {
           cout<<"enter student id:";
           cin>> sid;
           cout<<"\nenter student name:";
           cin>> sname;
           cout<<"\nenter student dob:";
           cin>> sdob;
           cout<<"\nenter student email:";
           cin>> semail;
           cout<<"\nenter student address:";
           cin>> saddress;
    	}
    		void stu2()
        {
		
           cout<<"\nstudent id:"<<sid;
           cout<<"\nstudent name:"<<sname;
           cout<<"\nstudent dob:"<<sdob;
           cout<<"\nstudent email:"<<semail;
           cout<<"\nstudent address:"<<semail;
         }
    };
    class B : public A
    {
    	public :
    		int s1,s2,s3,s4,s5,s6;
    		string cname,sname;
    			void show()
		{
			cout<<"\n enter college name :";
            cin>> cname;
            cout<<"\nenter stream :";
            cin>> sname;
            
			cout<<"\nenter s1 :";
            cin>> s1;
            cout<<"\nenter s2 :";
            cin>> s2;
            cout<<"\nenter s3 :";
            cin>> s3;
            cout<<"\nenter s4 :";
            cin>> s4;
            cout<<"\nenter s5 :";
            cin>> s5;
            cout<<"\nenter s6 :";
            cin>> s6;
            
            int total=s1+s2+s3+s4+s5+s6;
            int per=100*total/600;
            
            cout<<"\ntotal is :  "<<total;                      
            cout<<"\npercentage is :  "<<per;
            
            cout<<"\ns1 is: "<<s1;
            cout<<"\ns2 is: "<<s2;
            cout<<"\ns3 is: "<<s3;
            cout<<"\ns4 is: "<<s4;
            cout<<"\ns5 is: "<<s5;
            cout<<"\ns6 is: "<<s6;
            cout<<"\ntotal is :  "<<total;
            cout<<"\npercetage is :  "<<per;
            cout<<"\ncollege name is: "<<cname;
            cout<<"\nstream is: "<<sname;
		}
	};
	class C : public B
	{
		public :
			int no;
			void shoe()
		{
			cout << "not";
		}
	};
          int main()
          {
               C c;
               c.stu();
               c.show();
               c.stu2();

            return 0;
          }
