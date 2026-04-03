#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Program to check Right angaled Triangle.\nEnter the side of triangle.\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b))
    {
        if((a*a) == (b*b + c*c) || (b*b) == (c*c + a*a) || (c*c) == (a*a+b*b))
        {
            printf("Triangle is a Right angaled triangle.");
        }
        else
        {
            printf("Triangle is not a right angaled triangle.");
        }
    }
    else
    {
        printf("The Entered sides of triangle is Invalid.");
    }
    return 0;
}