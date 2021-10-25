#include <iostream>
bool liczbapierwsza(int x)
{ 
	if(x<=1)
		return false;
			for(int i=2;i*i<=x;i++)
			if(x%i==0){
				return false;
}
	else		
				return true;
		
			
}
	int main()
{
	int x;
		std::cout<<"podaj liczbe"<<std::endl;
			std::cin>>x;
				if (liczbapierwsza(x)){
				std::cout<<x<<"jest"<<std::endl;
			}	else
				std::cout<<x<<"nie jest"<<std::endl;

					return 0;
}
