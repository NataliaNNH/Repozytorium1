#include<iostream>
int main()
{
	int a,b;
	std::cout<<"Podaj a"<<std::endl;
	std::cin>>a>>std::endl;
	std::cout<<"Podaj b"<<std::endl;
	std::cin>>b>>std::endl;

	int i=b;
	while(i>=0)
	{
	std::cout<<i<<"a= ";
	i--;
	}
	 int j=a;
        while(j<=b)
        {
        std::cout<<j<<"b= ";
        j++;
        }
	


return 0;
}
