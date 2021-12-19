#include <iostream>
#include <algorithm>
 
std::string is_palindrome(std::string slowo) // funkcja sprawdzająca czy słowo jest palindromem
{
    std::cout<<"Podaj slowo";
    std::cin>>slowo;
    std::string odwrocone = slowo; // przechowuje w zmiennej odwrocone dane ze zmiennej "slowo"
    
    reverse(odwrocone.begin(), odwrocone.end()); // odwraca słowo
 
    if (slowo == odwrocone) {
        return "Jest palindromem";
    }
    else {
        return "Nie jest palindromem";
    }
}
int main()
{
    std::string slowo;
    std::cout << is_palindrome(slowo);
 
    return 0;
}
