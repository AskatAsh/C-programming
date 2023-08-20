#include<stdio.h>
int main()
{
    char str[20];

    gets(str);
    int i=0;

    while(str[i] != '\0')
    {
        i++;
    }
    printf("your name has %d characters\n",i);
}
