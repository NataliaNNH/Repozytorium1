#include <iostream>
using namespace std;

int main() {
        int a;
        cout << "podaj liczbe";
        cin >> a;

if((a==2) || (a==3) || (a==5) || (a==7)){
        cout<<"jest liczba pierwsza ";

        }else if((a%2==0) || (a%3==0) || (a%5==0) || (a%7==0)) {
                cout << "nie jest liczba pierwsza";
        }
                else {
        cout << "jest liczba pierwsza";
        }
return 0; 
}

