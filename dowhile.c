#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
    printf("enter value of n:");
    scanf("%d",&n);
    
    do
    {
        sum=sum+i;
        i++;
    }
    while(i<=n);

    printf("sum:%d",sum);
    return;    
}