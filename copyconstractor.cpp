#include<iostream>
using namespace std;

class copyconst{
	
	public:
	int z;
	
	copyconst(int a){
		z=a;
	}
	
	copyconst(copyconst &c){
		z=c.z;
	}
};
int main()
{
	copyconst c1(50);
	copyconst c2(c1);
	
	cout << c2.z;
	
	return 0;
}