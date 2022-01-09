#include <iostream>
#include <string>
int main()
{
    std::string x;
    int n;
    
    std::cout << "podaj slowo " <<std::endl;
    std::cin >> x;
    std::cout<<"Co ile liter?"<<std::endl;
    std::cin>>n;
    for (std::string::size_type i=0; i<x.size(); i=i+n)
    std::cout << x[i] << " ";
    
    
    return 0;
}
