#include <iostream>
#include <string>
auto main() -> int
{
	auto imie=std::string();
	auto drugieimie=std::string();
	std::cout<<"Podaj pierwsze imie"<<std::endl;
	std::cin>>imie;
	std::cout<<"Podaj drugie imie"<<std::endl;
	std::cin>>drugieimie;
	
	if(imie>drugieimie)
	{
	std::cout<<imie<<"jest dłuższe!";
	} else{
	    
	if(imie==drugieimie){
	    std::cout<<"Imiona są tej samej długości...";
	    
	}
	    else{
	        std::cout<<drugieimie<<"jest dłuższe.";
	        }
        }
	return 0;
}
