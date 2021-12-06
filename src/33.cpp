#include <iostream>
using namespace std;

void asum(int n)
{
    int suma=0;
    int*a=new int [n];
    for (int i=0;i<n; i++)
    {
        cout<<"Wartosść tablicy "<<i<<endl;
        cin>>a[i];
    }
        for(int i=0; i<n; i++)
    {
        suma=suma+a[i];
    }
    cout<<"Suma wartosci z tablic wynosi:"<<suma;
}
int main()
{
    int n;
    cout<<"Podaj ilosc tablic"<<endl;
    cin>>n;
    asum(n);
    return 0;
}
