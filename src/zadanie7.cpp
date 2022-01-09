#include <iostream>
#include <string>
using namespace std;

int count(string s, char znak)
{
 
    int ilerazy = 0;
    for (int i=0;i<s.length();i++)
        if (s[i] == znak) // jeżeli pojawia się znak podany   to +1
            ilerazy++;
    return ilerazy;
}

int main()
{
    
  
    string s;  
    cin>>s;
    char znak;
    cin>>znak;
    cout << count(s, znak) << endl;
    return 0;
}
