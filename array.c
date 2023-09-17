#include<stdio.h>
#include<conio.h>
void main()
{
    int h[5],i;

    for(i=0;i<=4;i++)
    {
        printf("enter value %d ",i+1);
        scanf("%d",&h[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d\n",h[i]);
    }
    return;
}