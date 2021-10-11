#include <iostream>
#include <string>

int main()
{
	int x;
	std::cout<<"Podaj liczbe:"<<std::endl;
	std::cin>>x;
	if(x==0){
	std::cout<<"0"<<std::endl;
	}
	else{
	if(x>0){
	std::cout<<"1"<<std::endl;
	}
	else{
	std::cout<<"-1"<<std::endl;
	}
	}
return 0;
}
