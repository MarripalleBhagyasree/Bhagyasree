#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char str[5][20],a[20];
	int i,j;
	cout<<"Enter any Five names:\t";
	for(i=0;i<5;i++)
	{
		cout<<" ";
		cin>>str[i];
	}
	for(i=1;i<5;i++)
	{
		for(j=1;j<5;j++)
		{
			if(strcmp(str[j-1],str[j])>0)
			{
				strcpy(a,str[j-1]);
				strcpy(str[j-1],str[j]);
				strcpy(str[j],a);
			}
		}
	}
	cout<<"Names sorted:\t\t";
	for(i=0;i<5;i++)
	{
		cout<<" ";
		cout<<str[i]<<"\t";
	}
	return 0;
}

