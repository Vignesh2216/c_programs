#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    printf("Enter year:");
    scanf("%d",&y);
    if(y%400==0)
    {
        printf("leap year");
    }
    else if(y%4==0 && y%100!=0) 
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return;   
}