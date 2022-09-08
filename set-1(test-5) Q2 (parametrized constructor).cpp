#include<iostream>
using namespace std;
class bank
{
	public:
	string name;
	int accno;
	double balance;
	bank(string n,int a,double b)
	{
		name=n;
		accno=a;
		balance=b;
	}
	void display()
	{
		cout<<" "<<name<<" "<<accno<<" "<<balance<<endl;
	}

};
int main()
{
	bank b1=bank("jahnavi",210210201342,20000);
	bank b2=bank("bhagya",219302109123,50000);
	b1.display();
	b2.display();
	return 0;
}
