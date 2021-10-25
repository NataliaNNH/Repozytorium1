#include <iostream>
int main()
{
    int x, i=0, silnia=1;

    std::cout<< "Podaj liczbe ";
	std::cin>>x;
    if(i>=x)
    {
        std::cout << "Silnia: "<<silnia<<std::endl;
    }
    else if(i<x)
    {
        while(i<x)
        {
            i++;
            silnia*=i;

        }
        std::cout<<"Silnia: "<<silnia<<std::endl;

    }
}
