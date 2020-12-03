#include<iostream>
#include<conio.h>
int main()
{
    int a[5],b;
    for(int i=0;i<5;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Enter a Element:";
    std::cin>>b;
    for(int i=0;i<5;i++)
    {
        if(a[i]==b)
        std::cout<<"Index of element is:"<<i;
    }
    return 0;
}