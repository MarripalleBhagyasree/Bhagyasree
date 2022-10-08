#include<iostream>
using namespace std;
class principal
{
	char name[100];
	int age;
	public:
		void set_p()
	{
		cout<<"enter the name:";
		cin.get(name,100);
		cout<<"enter the age:";
		cin>>age;
	}
	
	void display_p()
	{
		cout<<endl<<name<<"\n"<<age;
	}
};

class dean:principal
{
	char deanName[110];
	int idno;
	public:
	void set_d()
	{
		set_p();
		cout<<"enter the Dean Name:";
		cin.get(deanName,110);
		cout<<"enter the idno:";
		cin>>idno;
	}
	void display_d()
	{
		cout<<endl<<deanName<<"\n"<<idno;
	}
};

class hod:dean
{
	char hodName[90];
	int salary;
	public:
		void set_h()
		{
			set_d();
			cout<<"enter the hodname:";
			
			cin.get(hodName,90);
			cout<<"enter the salary:";
			cin>>salary;
		}
		void display_h()
		{
			cout<<endl<<hodName<<"\n"<<salary;
		}
};
int main()
{
	hod h;
	h.set_h();
	h.display_h();
}
