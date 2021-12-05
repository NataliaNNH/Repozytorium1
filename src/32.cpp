#include <iostream>
#include <numeric>
using namespace std; 

int main ()
{
    int x;
    cout<<"Podaj liczbe ";
    cin>>x;
    int n[x];
    int start;
    cout<<"Od jakiej liczby chcesz zaczac?";
    cin>>start;
    iota (n, n+10,start);
    cout<<"numery ";
    for (int i:n) 
    cout<< ' ' << i;
    cout<<endl;
    
    return 0;
}
