#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Program to check if a Triangle is Equilateral or Isoscelen or Scalene.\nEnter the sides of the triangle\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    if ((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        if(a==b && b==c && c==a)
        {
            printf("Triangle is Equilateral.");
        }
        else if(a==b || b==c || c==a)
        {
            printf("The Triangle is Isoscales");
        }
        else
        {
            printf("The Triangle is Scalene");
        }
    }
    else
    {
        printf("Entered sides of Triangle is Invalide");
    }
    return 0;
}