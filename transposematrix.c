#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[2][2],i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter element:");
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",arr[j][i]);
        }
        
        printf("\n");
    }
    return;
}