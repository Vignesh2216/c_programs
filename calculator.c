#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    char o;

    printf("enter num1:");
    scanf("%d",&a);
    printf("enter num2:");
    scanf("%d",&b);

    printf("enter operator:");
    scanf("\n""%c",&o);

    if(o=='+')
    {
        printf("sum=%d",a+b);
    }
    else if(o=='-')
    {
        printf("diff=%d",a-b);
    }
    else if(o=='*')
    {
        printf("product=%d",a*b);
    }
    else if(o=='/')
    {
        printf("quotient=%d",a/b);
    }
    else
    {
        printf("invalid operator");
    }
    return;
}