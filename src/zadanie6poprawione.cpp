#include <iostream> //Czy pierwsza się dzieli przez drugą

int is_divisible(int a, int b)
{
   if(a%b==0) // jezeli reszta z dzielenia wynosi 0 = true 
      return true;
   else
      return false;
}
int is_even(int a)
{
	if(is_divisible(a, 2) == 1)
	return true;
	else
	return false;
}
int main()
{
   int licznik;
	std::cout<<"Podaj licznik";
	std::cin>>licznik;
	std::cout<<is_even(licznik);
   return 0;
}
