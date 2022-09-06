#include<iostream>
using namespace std;
class employee
{
	int id;
	string name;
	public:
		void set_e()
		{
			cout<<"enter the id:";
			cin>>id;
			fflush(stdin);
			cout<<"Enter the employee name:";
			cin>>name;
			
		}
		void display_e()
		{
			cout<<endl<<id<<"\t"<<name;
		}
		
};
class company:employee
{
	int salary;
	string city;
	
	public:
		void set_c()
		{
			set_e();
			cout<<"Enter the salary:";
			cin>>salary;
			cout<<"enter the name of city:";
			cin>>city;
		}
		void display_c()
		{
			cout<<endl<<salary<<" /t "<<city;
		}
};
int main()
{
	company c;
	c.set_c();
	c.display_c ();
}
