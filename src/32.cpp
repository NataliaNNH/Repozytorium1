#include <iostream>
#include <iostream>
#include <numeric>
#include <string>
using namespace std;
auto x(string tekst) -> int
{
    int n;
    cout << tekst << "\n";
    cin >> n;
    return n;
}
auto init(int a[], int n) -> void
{
    for (int i =0; i <n; i++)
    {
        a[i]=0;
    }
}
auto iota(int a[], int n, int start) -> void
{
    for (int i=0; i <=n; i++)
    {
        a[i] = start;
        start ++;
    }
}

auto main () -> int
{
   int n = x("Podaj liczbe ");
   int p = x("Od jakiej liczby chcesz zaczac?");
   int a [100];
   int i =0;
   
   iota (a, n, p);
   while (i<n)
   {
       cout << a[i] << "\n";
       i++;
   }
    return 0;
}
