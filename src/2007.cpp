#include<iostream>
int suma(int x, int y, int z)
{
    int sum=0;
    for(int i=x;i<=y;i++)
        if(i%z==0)
            sum+=i;
    return sum;
}
int main()
{
    int x=0, y, z;
    std::cout<<"Podaj limit "<<std::endl;
    std::cin>>y;
    std::cout<<"Podaj dzielnik "<<std::endl;
    std::cin>>z;
    std::cout<<suma(x, y, z)<<std::endl;
    return 0;
}
