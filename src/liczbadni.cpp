#include <iostream>
using namespace std;

int  liczbadni(int miesiac, int rok)
{
	if( miesiac==2)	// jeżeli jest to 2-luty musimy uwzględnic rok przestepny, czyli musimy podzielić na 4/100/400
	{
		if((rok%400==0) || (rok%100!=0) || (rok%4==0))	
			return 29;
		else	
			return 28;
	}

	else if(miesiac==1 || miesiac==3 || miesiac==5 || miesiac==7 || miesiac==8 // miesiace ktore maja 30/31 czyli te normalne 
	||miesiac==10 || miesiac==12)	
		return 31;
	else 		
		return 30;
} 
int main()
{
	int dni=0, miesiac, rok;
	cout<<"Podaj miesiac 1-12: ";
	cin>>miesiac;
	cout<<"Podaj rok ";
	cin>>rok;
	dni=liczbadni(miesiac, rok);
	cout<<endl<<"Liczba dni tego miesiaca wynosi  "<<dni;
	return 0;
}
