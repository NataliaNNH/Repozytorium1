#include <iostream>
using namespace std; 
auto x(int a[], int n) -> void
{
    for (int i=0; i<n; i++)
    {
        a[i] = 0;
    }
}
int main()
{
    int tabl[100];
    int n;
    cout << "Podaj liczbe ";
    cin >> n;
    x(tabl, n);
    for (int i = 0; i<n;i++)
    {
        cout << tabl[i] <<' ';
    }
    return 0;
}
