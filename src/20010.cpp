#include<iostream>

int main()
{
    int x, silnia =1, i=1;
    std::cout<<"Podaj liczbe = ";
    std::cin >>x;
    do {
       silnia*=i;
       i++;
    } while (i<=x);
    std::cout<<"Silnia z liczby "<<x<<" wynosi = "<<silnia<<std::endl;
    return 0; 
}
