#include<iostream>
using namespace std;
 int main()
 {
    int r,i,j,n=1;
    cout<<"Enter the number of rows:";
    cin>> r ;
    
    for(i=1 ; i<=r ; i++)
    {
    	for(j=1 ; j<=i ; j++)
    	{
    		cout<<n;
    		n++;
		}
	cout<<endl;
	}
	return 0;
 }
