#include <iostream>
int wysokosc,szerokosc;

int main()
{
    std::cout<< "Podaj wysokosc: ";
    std::cin>>wysokosc;
    std::cout<< "Podaj dlugosc: ";
    std::cin>>szerokosc;

   for(int i=0; i<szerokosc;  i++)
   {
       if(wysokosc<=1) break;

       std::cout<< "X";
   }

std::cout<<std::endl;

   for(int b=0; b<wysokosc-2; b++)
   {
      std::cout<< "X";

       for(int c=0; c<szerokosc-2; c++)
       {
           std::cout<< " ";
       }std::cout<<"X"<<std::endl;
   }

for(int d=0; d<szerokosc; d++)
{
     if(wysokosc<1)break;
   std::cout<< "X";
}

 return 0;
}
