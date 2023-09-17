#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[50],min,max;
    printf("enter n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i);
        scanf("%d",&a[i]);
    }

    min=a[0];
    max=a[0];

    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("max:%d",max);
    printf("\nmin:%d",min);
    return;
}