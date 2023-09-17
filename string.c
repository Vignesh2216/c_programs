#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i;
    char s[50];
    printf("enter string:");
    scanf("%s",&s);
    i=strlen(s);
    printf("%s",s);
    printf("\nlength:%d",i);
    return;
}