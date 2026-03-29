#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Program to check that the intered triangle is valid or not\n");
    printf("Enter the all three sides of triangle\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        printf("\nTriangle is valid.");
    }
    else
    {
        printf("\nEntered Sides are not valid to create a triangle.\n");
    }

    printf("\n");
    return 0;
}