#include<stdio.h>
#include<conio.h>
void main()
{
    int n,copy,rev=0;
    printf("enter n:");
    scanf("%d",&n);
    copy=n;

    while(copy>0)
    {
        rev=rev*10;
        rev=rev+(copy%10);
        copy=copy/10;
    }
    printf("reverse:%d",rev);
    if(n==rev)
    {
        printf("\npalindrome");
    }
    else
    {
        printf("\nnot a palindrome");
    }
    return;
}