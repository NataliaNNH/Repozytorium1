#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <cstdlib>//rand
#include <conio.h> //biblioteka dla m.in getch


void Gra();
int Wygrana[12]={500, 1000, 2000, 5000, 10000, 20000, 40000, 75000, 125000, 250000, 50000, 1000000}; // zmienna przechowujaca wartosci wygranej
std::string Pytanie[12]={ // zestaw pytan przechowywanych w string
"Skad pochodzi Conan Barbarzynca?", //1
"Hipokrene to zrodlo natchnienia literackiego. Kto wydobyl je na powierzchnie?",//2
"Komiksowym dzieckiem rysownika Boba Kane'a jest:" , //3
"Ryba nie jest:", //4
"Kto jest mistrzem tego samego oreza w jakim specjalizowala sie mitologiczna Artemida?", //5
"Ktory aktor urodzil sie w roku opatentowania kinematografu braci Lumiere?", //6
"Mowa w obronie poety Archiasza przeszla do historii jako jeden z najswietniejszych popisow retorycznych", //7
"Co na Srebrnym Globie zrobil Alan Shepard?", //8
"Kto jest tworca logo zespolu Perfect?", //9
"Na co reaguje nocyceptor?", //10
"Z czego odlane są zlote medale olimpijskie?", //11
"W oryginalnej trylogii Gwiezdne wojny 3-CPO ma srebrna:"}; //12
std::string mozliwosci[4][12]={{"z Cimmerii", "poeta",             "Spider-Man",       "rozpior",      "Legolas",              "Humphrey Bogart",      "Demostenesa",       "zatanczyl rock and rolla",    "Andrzej Mleczko",  "Na bodzce uszkadzajace tkanki", "Z brazu","Lewa dlon"},
                    {"z Oz",       "skrzydlaty kon",    "Captain America",  "kraska",       "Don Kichot",           "Charlie Chaplin",      "Cycerona",          "Biegal z siatka na motyle",   "Henryk Sawka",     "Na mroki nocy",                "Ze zlota","Prawa noge"},
                    {"z Rivii",     "powiesciopisarz",  "Batman",           "swinka",       "Zorro",                "Fred Astaire",         "Izokratesa",        "Zagral w golfa",              "Marek Raczkowski", "Na slodki smak",               "Ze srebra","Szczeke"},
                    {"z Mordoru",   "dramaturg",        "Superman",         "krasnopiorka", "Longinus Podbipieta",  "Rudolph Valentino",    "Kwintyliana",       "Godzine lezal krzyzem",       "Edward Lutczyn",   "Na podczerwien malej mocy",     "Z zeliwa","Klatke piersiowa"}};
                    // 12 zestawow po 4 opcje do wyboru, przechowane w stringu
std::string Litery[4]={"A) ","B) ","C) ","D) "}; //wizualna czesc, a b c d przed opcjami wyboru
char OdpowiedziPOP[12]={'a','b','c','b','a','d','b','c','d','a','c','b'}; //zestaw poprawnych odpowiedzi
std::string PrawidloweODP[12]={"z Cimerii", "skrzydlaty kon", "Batman", "kraska", "Legolas", "Rudolph Valentino", "Cycerona", "Zagral w golfa","Edward Lutczyn","Na bodzce uszkadzajace tkanki", "Ze srebra", "Prawa noge"};
char Wybor; // to jest a, b, c, d
void Pomoc();
bool koloR1=false, koloR2=false, koloR3=false;
int i,j;
char pause;
void koniec();
class Menu
{
public:
    void MenuWYS()
    {    std::cout<<"\n\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<std::endl; // \t jest rowny z tab, \n nowa linia
         std::cout<<"\t\t\$             Milionerzy\t\      $"<<std::endl;
         std::cout<<"\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<std::endl;
        return;
    }
};

main(){
    system("color 1"); // kolor tla i tekstu w tym przypadku tylko tekst zostal zmieniony
    Gra();
    koniec();
    return 0;
}

void Gra(){
    Menu wyswietl;
    for(i=0; i<12; i++){
    do{
    system("cls");
    wyswietl.MenuWYS(); //wyswietla baner z "milionerzy"
    std::cout<<"\nPytanie numer"<<" "<<(i+1)<<"/"<<"12"<<"\t\t\t"<<"Do wygrania "<<Wygrana[i]<<" zlotych"<<"\n"<<std::endl; // wylicza ktore jest to juz pytanie
    std::cout<<Pytanie[i]<<std::endl;
    std::cout<<"\n"<<std::endl;
    for(j=0; j<4; j++){ //wyswietla dane ze stringa litery i mozliwosci do tego
    std::cout<<Litery[j]<<mozliwosci[j][i]<<std::endl;
    std::cout<<"\n";
    }
    std::cout<<"\nJaka jest prawidlowa odpowiedz?  Mozesz skorzystac z kola ratunkowego pod litera E"<<std::endl;
    Wybor=getch();
    if(Wybor!='a' && Wybor!='b' && Wybor!='c' && Wybor!='d' && Wybor!='e') //uczestnik podaje odpowiedz a b c d albo pomoc pod litera e
            {
                std::cout<<"\nWybierz jedna z odpowiedzi A, B, C lub D."<<std::endl;
                    pause=getch();
            }
    }
    while(Wybor!='a' && Wybor!='b' && Wybor!='c' && Wybor!='d' && Wybor!='e');
    if(Wybor==OdpowiedziPOP[i]) //jezeli podany wybor jest zgodny z poprawnymi odpowiedziami to wyswietla komunikat:
    {
    std::cout<<"\nOdpowiedz poprawna! Gratuluje. \n"<<std::endl;
    std::cout<<"Wcisnij ENTER aby kontynuowac"<<std::endl;
     pause=getch(); //
    }
    else
    {
        if(Wybor=='e') //ale jezeli uczestnik wybierze 'e'
        {Pomoc();} //wyswietlaja sie kola ratunkowe
        else{
        std::cout<<"\n Niestety jest to bledna odpowiedz\n"<<std::endl; //jezeli wybor rozni sie od poprawnej odpowiedzi to
        std::cout<<"Wcisnij ENTER aby odebrac swoje pieniadze"<<std::endl;
        pause=getch();
       break;
        } //petla do while dopoki nie podano zlej odpowiedzi
    }
    system("cls"); //czyszczenie 'ekranu',
}
    return;
}//Gra

void Pomoc()
{
Menu wyswietl;
char c;
std::string drugaodp=mozliwosci[rand() % 4][i]; // generuje liczbe od 0-3
do{
system("cls");
wyswietl.MenuWYS();
std::cout<<"\n KOLO RATUNKOWE!\n"<<std::endl;
std::cout<<"0.$ Nie chce kola ratunkowego"<<std::endl;
std::cout<<"1.$ 50/50"<<std::endl;
std::cout<<"2.$ Glos publicznosci"<<std::endl;
std::cout<<"3.$ Telefon do przyjaciela\n"<<std::endl;
std::cout<<"Czy korzystasz z kola ratunkowego?"<<std::endl;
c=getch();
if(c<'0' || c>='4'){ // Jezeli uczestnik wybierze z klawatury cyfre inna niz od 0-3 to musi podac jeszcze raz prawdilowa wartosc
    std::cout<<"\nPodaj cyfre od 0-4. Kliknij ENTER. "<<std::endl;
    pause=getch();
    }
}
while(c<'0' || c>='4');
switch(c)
{ //case 1,2,3 kola ratunkowe
    case '1':
    if(koloR1==true)
    {system("cls");
    wyswietl.MenuWYS();
    std::cout<<"\n\n\t\t     To kolo ratunkowe zostalo juz wykorzystane"<<std::endl;
pause=getch();}
    else
    {system("cls");
wyswietl.MenuWYS();
    std::cout<<"\nPytanie numer"<<" "<<(i+1)<<"\t\t\t"<<"Do wygrania "<<Wygrana[i]<<" zlotych!"<<"\n"<<std::endl;
    std::cout<<Pytanie[i]<<std::endl;
    std::cout<<"\n"<<std::endl;
    if(PrawidloweODP[i]==drugaodp){
    drugaodp=mozliwosci[rand() % 4][i];
    }
    std::cout<<PrawidloweODP[i]<<"\n"<<std::endl;
    std::cout<<drugaodp<<std::endl;
    koloR1=true; // nadajemy wartosc kołaR =true aby "zaliczyć" to jako juz wykorzystane koło
    pause=getch();}
        break;
    case '2':  //publiczność
    if(koloR2==true)
    {
system("cls");
wyswietl.MenuWYS();
std::cout<<"\n\n\t\t     To kolo ratunkowe zostalo juz wykorzystane"<<std::endl;
pause=getch();
    }
    else{
        system("cls");
wyswietl.MenuWYS();
std::cout<<"\nPytanie numer"<<" "<<(i+1)<<"\t\t\t"<<"Do wygrania "<<Wygrana[i]<<" zlotych"<<"\n"<<std::endl;
    std::cout<<Pytanie[i]<<std::endl;
    std::cout<<"Wiekszosc osob z publicznosci wskazala na odpowiedz:"<<"\n"<<std::endl;
    std::cout<<OdpowiedziPOP[i]<<") "<<PrawidloweODP[i]<<"\n"<<std::endl;
    std::cout<<"\t\tWykorzystales wlasnie pomoc publicznosci\n"<<std::endl;
    koloR2=true;
    pause=getch();
    }
    break;
    case '3':
    if(koloR3==true)
    {system("cls");
wyswietl.MenuWYS();
std::cout<<"\n\n\t\t    To kolo ratunkowe zostalo juz wykorzystane"<<std::endl;
pause=getch();}
    else{
    system("cls");
    wyswietl.MenuWYS();
    std::cout<<"\nPytanie numer"<<" "<<(i+1)<<"\t\t\t"<<"Do wygrania "<<Wygrana[i]<<" zlotych!"<<"\n"<<std::endl;
    std::cout<<Pytanie[i]<<std::endl;
    std::cout<<"\n"<<std::endl;
    std::cout<<"Doradzono Tobie odpowiedz:"<<std::endl;
    std::cout<<OdpowiedziPOP[i]<<") "<<PrawidloweODP[i]<<"\n"<<std::endl;
    std::cout<<"\t\t Wykorzystales wlasnie telefon do przyjaciela\n"<<std::endl;
    koloR3=true;
    pause=getch();}
    break;
}
i=i-1;
    return;
}//Pomoc

void koniec(){
    system("cls"); //czysci
    Menu wyswietl;
wyswietl.MenuWYS();
std::cout<<"\n\t\t\t  Wygrales "<<Wygrana[i-1]<<" zlotych\n"<<std::endl;
        std::cout<<"\t\t    Koniec gry! Dziekujemy za udzial! \n"<<std::endl;
        system("PAUSE");
    return;
}
