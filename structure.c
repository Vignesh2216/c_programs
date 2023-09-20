#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book
{
    int no;
    char author[25];
    float price;
};
void main()
{
    struct book hp;
    hp.no=7;
    hp.price=550.76;
    strcpy(hp.author,"JK Rowling");

    printf("%d\n",hp.no);
    printf("%f\n",hp.price);
    printf("%s\n",hp.author);
    return;
}