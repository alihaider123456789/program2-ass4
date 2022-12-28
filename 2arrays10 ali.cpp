/*
Name:
					Ali Haider
Department:
   					BS-Data Science
Subject:
					Programming Foundament
Session:
					2022 to 2026
Semester:
					1st
*/
#include<iostream>
using namespace std;
int main()
{
	int n[10],j;
	for(j=0;j<10;j++)
	{
		cout<<"enter the numbers:";
		cin>>n[j];		
	}
	    cout<<"your number\n";
		for(j=0;j<10;j++)
	{
		cout<<n[j]<<endl;
	}
	   cout<<"\nreverse order\n";
		for(j=9;j>=0;j--)
	{
		cout<<n[j]<<endl;
	}
}