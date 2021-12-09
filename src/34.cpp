// wartość minimalna
#include<iostream> 
using namespace std;

int main()
{
     
	int minimum;
	int tab[]={42 , 9 , -1 , 18 , 59 , 3 , 101 , 31 , 72 , 12}; //tablica
	
	minimum=tab[0];  
	
	for(int i=1;i<10;i++) //porownujemy liczby, od 1 - bo nie ma sensu porownywac pierwszej liczby ze soba
	if(minimum>tab[i])
		minimum=tab[i];
	
	cout<<"Najmniejsza liczba w tej tablicy jest "<<minimum<<endl;

	return 0;
}
