#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],n,i,sum=0;
    printf("enter no. of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("element %d:",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum=%d",sum);
    printf("\n""avg:%d",sum/n);
    return;
}