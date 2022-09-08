#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,a[10],n,min,max;
cout<<"ENTER NUMBER OF ENTRIES => ";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"ENTER THE ENTRY "<<i+1<<" => ";
cin>>a[i];
}
sort(a,a+i);
cout<<"\nSORTED ARRAY\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<"\nenter the nth min => ";
cin>>min;
cout<<"\nenter the mth max => ";
cin>>max;
cout<<"\n the sum= => "<<min+max;
cout<<"\n the difference is =>"<<max-min;
}
