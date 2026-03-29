#include <stdio.h>
int main()
{
    int n, d, rev = 0;
    printf("Program to print the reverse of a given number\n");
    printf("Enter a number:");
    scanf("%d", &n);
    while(n>0)
    {
        d = n%10 ;
        rev = rev*10 +d;
        n = n/10 ;
    }
    printf("Reverse of number is %d\n", rev);


    int m;
    printf("\nProgram to print the first digits of the number\n");
    printf("Enter a number:");
    scanf("%d",&m);
    while(m>10)
    {
       m=m/10;
    }
    printf("First digit of the number is %d", m);
    return 0;
}