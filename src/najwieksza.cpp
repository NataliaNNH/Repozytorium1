#include <iostream>
#include <string>

int main()
{
	int x, y, z, max, min;
	std::cout<<"podaj 1 liczbe"<<std::endl;
	std::cin>>x;
	std::cout<<"podaj 2 liczbe"<<std::endl;
	std::cin>>y;
	std::cout<<"podaj 3 liczbe"<<std::endl;
	std::cin>>z;
	if(x>y){
	max=x;
	min=y;
	}
	else
	{
	max=y;
	min=x;
}
	if(z>max)
	max=z;
	else if(z<min)
		min=z;
	std::cout<<"Najwieksza liczba to ="<<max<<std::endl;
	return 0;

}
