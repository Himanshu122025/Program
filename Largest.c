#include<stdio.h>
int main (){
    int a,b,c;
    printf ("Program to find the Largest number among three numbers\n");
    printf ("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("The Largest number is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("The Largest number is %d",b); 
    }
    else
        printf("The Largest number is %d",c);
        return 0;     
}