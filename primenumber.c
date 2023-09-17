#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,x=0;
    printf("enter n:");
    scanf("%d",&n);

    for(i=2; i<n ; i++ ) 
    {
        if(n%i!=0)
            continue;
        else
        {
            x=1;
            printf("not a prime number");
            break;
        }
    }
    if(x==0)
    {
        printf("it is prime number");
    }
    return;
}