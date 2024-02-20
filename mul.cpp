#include<iostream>
int main()
{
    int a,b,c=0,i;
    std::cout<<"Enter two values:";
    std::cin>>a>>b;
    for(i=0;i<b;i++)
    {
        c=c+a;
    }
    std::cout<<"This is a mul. of two no.:"<<c;
}