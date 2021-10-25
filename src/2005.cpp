#include<iostream>

bool liczbapierwsza(int x)
{
	if(x<2) 		
		return false; 
		
	for(int i=2;i*i<=x;i++)
		if(x%i==0) 			
			return false;   
	return true;
}

int main()
{
	int sumalp, x;
	
	std::cout<<"podaj liczbę "<<std::endl;
	std::cin>>x;
	
	if(liczbapierwsza(x))
		{
			std::cout<<x<<" jest liczbą pierwszą"<<std::endl;
				}
	else{
		std::cout<<x<<" nie jest liczbą pierwszą"<<std::endl;
		}
		
	for(int i=x; i>0; i--) {
        if(liczbapierwsza(x)) 
		{
            sumalp+=i;
        }
    }
    std::cout<<"suma liczb pierwszych mniejszych lub równych  x wynosi:"<<sumalp<<std::endl;
		
		
		
	
	return 0;
}
