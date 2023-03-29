#include<iostream>
using namespace std;

class Student
 {
 	public:
 		
 		string name= "";
 		int rollno= 0;	
};
int main()
{
	Student s1;
	
	s1.name = "John";
	s1.rollno = 2;
	
		{
 		cout << "my name is: "<< s1.name;
 		cout << "\nmy Roll_no is:" << s1.rollno;
	}
	return 0;
}
