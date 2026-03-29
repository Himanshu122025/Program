#include<stdio.h>
#include<math.h>
int main(){
    int a, b,c,d;
    float e;
    printf("\nProgram to fint the value of D(discriminant) of a quadratic equation \n");
    printf ("Enter the value of a, b and c one by one \n");
    printf("a=");
    scanf("%d", &a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);

    d=pow(b,2) - 4*a*c;
    printf("\nThe value of D is %d\n", d);
    e= sqrt(d);
    printf("%f", e);
    printf("\nThank you\n");
    printf("\n");
    return 0;
    

}