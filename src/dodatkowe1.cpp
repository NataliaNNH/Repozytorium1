#include <iostream>
using namespace std;
int main()
{
	char dzien_tygodnia;
	cout<<"Podaj cyfre od 1-7\n"<<endl;
	cin>>dzien_tygodnia;
	cout<<"dzien tygodnia "<<endl;
	switch(dzien_tygodnia){
	case '1' : cout<<"Poniedzialek";
	break;
	case '2' : cout<<"wtorek";
	break;
	case '3' : cout<<"sroda";
	break;
	case '4' : cout<<"czwartek";
	 break;
        case '5' : cout<<"piatek";
 	break;
        case '6' : cout<<"sobota";
	 break;
        case '7' : cout<<"niedziela";
	break;
	default:
	cout<<"Podaj cyfre od 1-7:\n";
}
return 0;
}
