#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"podaj liczbe"<<endl;
	cin>>x;
	for(int i=0; i<x; i++)
	{
	for (int j=1; j<x-i; j++)
	cout<<"*";
	for (int j=x-i; j<=x+i; j++)
	cout<<" ";
	for (int j=x+i+1; j<x*2;j++)
	cout<<"*";
	
	cout<<endl;
 }
	return 0;
}
