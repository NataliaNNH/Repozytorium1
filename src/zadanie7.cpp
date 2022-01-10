#include <iostream>
#include <string>

int count( std::string s, char znak)
{
 
    int ilerazy = 0;
    for (int i=0;i<s.length();i++)
        if (s[i] == znak) // jeżeli pojawia się znak podany   to +1
            ilerazy++;
    return ilerazy;
}

int main()
{
    
  
    std::string s;  
     std::cin>>s;
     char znak;
     std::cin>>znak;
     std::cout <<count(s, znak)<< std::endl;
    return 0;
}

