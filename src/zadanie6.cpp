#include <iostream> //Czy pierwsza się dzieli przez drugą

int is_divisible(int a, int b)
{
   if(a%b==0) // jezeli reszta z dzielenia wynosi 0 = true 
      return true;
   else
      return false;
}
int main()
{
   int is_divisible(int a, int b);
   int licznik, mianownik, wynik;
   std::cout<<"Podaj mianownik ";
   std::cin>>licznik;
   std::cout<<"Podaj dzielnik ";
   std::cin>>mianownik;

   wynik=is_divisible(licznik, mianownik); 
   if(wynik==true) //z funkcji is_divisible
      std::cout<<std::endl<<licznik<<" jest podzielne przez liczbę "<<mianownik;
   else
      std::cout<<std::endl<<licznik<<" nie jest podzielne przez liczbę"<<mianownik;
   return 0;
}
