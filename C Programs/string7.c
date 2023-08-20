#include<stdio.h>
int main()
{
    char str[20],newStr[20];
    gets(str);
    int i;

    for(i=0;str[i]!='\0';i++)
    {
        newStr[i] = str[i];
    }
    printf("The new string after copy is : %s\n",newStr);
}
