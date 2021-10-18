#include <iostream>
#include <cmath>
int main()
{
	int x;
	std::cout<<"Podaj liczbe:"<<std::endl;
	std::cin>>x;
	if(x>=0){
	std::cout<<"wartosc bezwzgledna to:"<<x<<std::endl;
	}
	else
	{
	std::cout<<"wartosc bezwgledna to:"<<abs(x)<<std::endl;
	}
return 0;
	
}
