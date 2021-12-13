#include <iostream>
#include <string>
 

int main()
{
    std::string imie[5];
    int m=0;
    int z=0;
    for (int i=0; i<5; i++){
        std::cout << "Podaj 5 imion: ";
        std::cin>>imie[i];
}
    for (int i=0; i<5; i++){
    if (imie[i].back == 'a' || imie[i].back == 'A'){
        z++;
    }
    else{
        m++;
        }
    }
    std::cout<<"Imion zenskich jest: "<<z<<std::endl;
    std::cout<<"Imion meskich jest: "<<m<<std::endl;
    return 0;
}
