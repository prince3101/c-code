#include<iostream>
using namespace std;

class cloud{
	private:
	int accNo;
	
	public:
	void getBankDetails(int no)
	{
		accNo=no;
	}
	void setBankDetails(string bankName)
	{
		cout<<"Your Account No:-"<<accNo;
		cout<<"Your Bank Name is:-"<<bankName;
	}
};
int main()
{
	cloud c;
	c.getBankDetails(987654321);
	c.setBankDetails("Bank of Baroda");
	
	return 0;
}
