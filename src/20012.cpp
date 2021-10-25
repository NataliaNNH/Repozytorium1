
#include<iostream>
int main()
{
int wysokosc;
std::cout<<"Podaj wysokość"<<std::endl;
std::cin>>wysokosc;
 for(int i=1; i<=wysokosc;i++){
	for(int j=1; j<=i;j++){
	std::cout<<"*";
}
	std::cout<<std::endl;
}
return 0;
}

