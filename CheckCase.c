#include<stdio.h>
int main(){

    char ch;
    printf("Program to check if Entered character is in uppercase or in lowercase\n");
    printf("Enter the any character.\n");
    scanf("%c",&ch);
    if ((ch>='a')&&(ch<='z'))
    {
        printf("%c is in lowercase.\n",ch);
    }
    else if ((ch>='A')&&(ch<='Z'))
    {
        printf("%c is in Uppercase.\n",ch);
    }
    else
    {
        printf("%c is not any English character.\n",ch);
    }
    if ((ch>='0')&&(ch<='9'))
    {
        printf("%c is a digit.\n",ch);
    }

    return 0;
}