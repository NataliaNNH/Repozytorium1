#include <iostream>
int main()
{
	 int n, silnia=1;
	std::cout<<"Podaj n: ";
	std::cin>>n;

	for(int i=n;i>1;i--)
		silnia*=i;

	std::cout<<"silnia z liczby "<<n<<" wynosi "<<silnia<<std::endl;

	return 0;
}
