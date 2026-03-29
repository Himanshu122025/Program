#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d;
    float imag,r1,r2;
    printf("Program to find roots of given Quadratic Equation\n");
    printf("Enter the value of a,b,c,d\n");
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    d = (b*b) - (4*a*c);
    if(d>0)
    {
        r1 = ((-b) + sqrt(d))/2*a;
        r2 = ((-b) - sqrt(d))/2*a;
        printf("Roots are real and distincts:\n %f and %f\n",r1,r2);
    }
    else if (d==0)
    {
        r1 = r2 = (-b)/2*a;
        printf("Roots are real and equal:\n%f and %f\n",r1,r2);
    }
    else
    {
        r1 = r2 = -b/2*a;
        imag= sqrt(-d)/2*a;
        printf("Distincts and Imaginary Roots:\n%f+i%f and %f-i%f\n",r1,imag,r2,imag);
    }
    printf("\nAbove are roots of given Quadratic equation\n");
    printf("\n");
    return 0;
}