#include<stdio.h>
#include<conio.h>
int main()
{
    int a=1,b=1,c=0;
    printf("and:%d",a&&b);
    printf("\n""and:%d",a&&c);
    printf("\n""or:%d",a||b);
    printf("\n""or:%d",a||c);
    printf("\n""not:%d",!a);
    return 0;
}