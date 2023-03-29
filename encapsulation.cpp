#include<iostream>
using namespace std;

class Text{
	
	private:
		int accno;
	
	public:
		
		void exam()
		{
			int no;
			accno = no;
		}
		void bankdetails()
		{
			string bankname;
			cout << "Your account no is :" ;
			cin >> accno;
			
			cout << "Your bank name : ";
			cin >> bankname;
			
			cout << "Your Bankaccount no. is :" <<accno;
			cout  << "Your Banckname is :" <<bankname;
			
		}
};
int main()
{
	Text t1;
	t1.exam();
	t1.bankdetails();
		
	return 0;
}