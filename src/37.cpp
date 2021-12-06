#include <iostream>
#include <algorithm> //tablica,sortowanie
using namespace std;
auto sort_asc(int a[] ) -> void
{
    for (int n=0; n<8; n++)
    cout<<a[n]<< " ";
}
int main()
{
    int a[8]={20, 30, -23, -2, 4, 45, 56, 0};
    cout<<" Tablica"<<endl;
    sort_asc(a);
    sort(a, a+8);
    cout<<endl<<"Po posortowaniu w kolejnosci rosnacej"<<endl;
    sort_asc(a);
    
    return 0;

}
 
