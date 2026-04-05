#include<stdio.h>
int main ()
{
    int a , b;
    char choice;
    printf("Program of Calculator.");
    printf("Enter + for addition\nEnter - for substraction\nEnter * for multiplication\nEnter / for division\n");
    printf("choice=");
    scanf("%c",&choice);
    printf("\nEnter two numbers\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    switch(choice)
    {
        case'+':printf("The sum is %d",(a+b));
                break;
        case'-':printf("The substraction is %d",(a-b));
                break;
        case'*':printf("The multiplication is %d",(a*b));
                break;
        case'/':printf("The division is %d",(a/b));
                break;
        case'%':printf("The remender is %d",(a%b));
                break;
        default:printf("Ivalid choice");                                             
    }
    return 0;

}