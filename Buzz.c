#include<stdio.h>
int main()
{
    int a;
    printf("Program to check if number is buzz or not.\n");
    printf("Enter the number.\na= ");
    scanf("%d",&a);
    if((a%7==0)||(a%10==7))
    {
        printf("Number %d is a Buzz number.\n",a);
    }
    else
    printf("Number is not a Buzz Number.");
    return 0;
}