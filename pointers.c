#include<stdio.h>
#include<conio.h>
void main()
{
    int *a;
    int d=5;
    a=&d;

    printf("%d",a);
    printf("\n%d",*a);
    return;
} 