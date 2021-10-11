#include <iostream>
#include <string>

int main()
{
	 int x, y;
	std::cout<<"podaj pierwsza liczbe:"<<std::endl;
	std::cin>>x;
	std::cout<<"podaj druga liczbe:"<<std::endl;
	std::cin>>y;
	 if(x==y){
        std::cout<<x<<"="<<y<<std::endl;
        }
	else{

		if(x>y){
		std::cout<<x<<">"<<y<<std::endl;
		}
		else
		{
		std::cout<<x<<"<"<<y<<std::endl;
		}
	}
return 0;
}
