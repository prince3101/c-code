#include<iostream>
using namespace std;

class Student
 {
 	public:
 		
 		string name= "";
 		string address= "";
 		int rollno= 0;
 		int mobile_no= 0;
};
int main()
{
	Student s1,s2;
	
	s1.name="SAM";
	s1.rollno=12;
	s1.address="GU";
	s1.mobile_no=987654321;
	
	s2.name="JOHN";
	s2.rollno=13;
	s2.address="coud";
	s2.mobile_no=1234567895;
	
		cout << "my name is: "<< s1.name;
 		cout << "\nmy Roll_no is:" << s1.rollno;
 		cout << "\nmy address is: "<< s1.address;
 		cout << "\nmy mobile_no is:" << s1.mobile_no;
 		
 		cout << "\nmy name is: "<< s2.name;
 		cout << "\nmy Roll_no is:" << s2.rollno;
 		cout << "\nmy address is: "<< s2.address;
 		cout << "\nmy mobile_no is:" << s2.mobile_no;
 		
		return 0;
}
