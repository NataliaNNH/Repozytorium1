#include <iostream>
int is_even(int x) {
  if( x%2 == 0){
        return true;}
    else{
        return false;
    }
}
        
int main()
{   
int x;
    std::cout<< "Podaj liczbe ";
    std::cin>>x;
    std::cout<<is_even(x);

  return 0;
}
