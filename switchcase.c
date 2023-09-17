#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   char c;
   printf("enter num1:");
   scanf("%d",&a);
   printf("enter num2:");
   scanf("%d",&b);
   printf("enter operator:");
   scanf("\n""%c",&c);

   switch(c)
   {
       case '+':
            printf("sum:%d",a+b);
            break;

        case '-':
            printf("diff:%d",a-b);
            break;

        case '*':
             printf("mul:%d",a*b);
             break;

        case '/':
             printf("div:%d",a/b);
             break;

        default:
           printf("invalid operator");
   }
   return;
}