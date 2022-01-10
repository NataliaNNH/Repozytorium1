
#include <iostream>
bool pierwsza(int x)
{
        if(x<2)
                return false; 
        for (int i=2;i*i<=x;i++) 
                if(x%i==0) 
                return false;   
                return true;
}
int main()
{
        int suma=0, x, ilosc=0;
        std::cout<<"podaj liczbe ";
        std::cin>>x;
        if(pierwsza(x)){
                std::cout<<x<<" jest liczba pierwsza"<<std::endl;
}
        else{
                std::cout<<x<<" nie jest liczba pierwsza"<<std::endl;}
        for (int i=x; i>0; i--) {
        if(pierwsza(i)){
            suma += i;
            ilosc++;
        }
   }
    std::cout<<"suma liczb pierwszych mniejszych od  n  wynosi:"<<suma<<"wykonanych petli"<<ilosc<<std::endl;
        return 0;
}
