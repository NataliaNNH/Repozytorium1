#include <iostream>
#include <numeric>
using namespace std; 

int main ()
{
    int n;
    cout<<"Podaj liczbe ";
    cin>>n;
    int a[n];
    int start;
    cout<<"Od jakiej liczby chcesz zaczac?";
    cin>>start;
    iota (a, a+10,start);
    cout<<"numery ";
    for (int i:a) 
    cout<< ' ' << i;
    cout<<endl;
    
    return 0;
}
