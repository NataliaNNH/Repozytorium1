//wartosc maksymalna z tablicy
#include<iostream>
using namespace std;
int main()
{
     
	int max;
	int tab[]={42 , 9 , 1 , 18 , 59 , 3 , 101 , 31 , 72 , 12}; //tablica

	max=tab[0];  
	
	for(int i=1;i<10;i++) //porownujemy liczby, od 1 - bo nie ma sensu porownywac pierwszej liczby ze soba
		if(max<tab[i])
			max=tab[i];
	
	cout<<"Najwieksza liczba w tej tablicy jest "<<max<<endl;

	return 0;
}
