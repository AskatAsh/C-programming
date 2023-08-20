#include<stdio.h>
int main()
{
    char str[30];
    int i=0,len=0;

    printf("Enter your fool nam: ");

    gets(str);

    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("The string length is : %d\n",len);
}


