#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("Program to Generate Energy Bill.\n");
    printf("Enter the no. of units.\nUnits=");
    scanf("%d",&units);
    if (units>600)
    {
        bill= 1850 + (units-600)*9.0;
    }
    else if (units>400 && units<=600)
    {
        bill= 1400 + (units-400)*7.50;
    }
    else if (units>200 && units<=400)
    {
        bill= 700 + (units-200);
    }
    else if (units>0 && units<=200)
    {
        bill= units*5.50;
    }
    else 
    {
        printf("Invalid Units entered for Bill Generation");
    }
    printf("The Energy bill is %f\n",bill);   
     
    return 0;
    
}