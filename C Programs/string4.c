#include<stdio.h>
int main()
{
    char str[30];
    int i=0,len;

    printf("Enter your fool nam: ");

    gets(str);
    len = strlen(str);

    printf("The length of your name is %d characters\n",len);

    for(i=0;i<len;i++)
    {
        printf("%c\n",str[i]);
    }

}


