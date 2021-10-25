#include<iostream>
int main()
{
int x, y;
std::cout<<"Podaj wyokość"<<std::endl;
std::cin>>x;
std::cout<<"Podaj szerokość"<<std::endl;
std::cin>>y;
for (int i=0;i<x; i++)
{
	for(int j=0; j<y; j++)
	{
	std::cout<<"*";
}
	std::cout<<std::endl;
}
return 0;

}
