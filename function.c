#include<stdio.h>
#include<conio.h>
int add(int a,int b)
{
    int c= a+b;
    return c;
}

void main()
{
    int a=5;
    int b=7;
    printf("%d",add(a,b));
    return;
}