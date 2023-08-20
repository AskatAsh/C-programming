#include<stdio.h>
int main()
{
    char str[20] = "Hello world";
    char rev[20];
    int i,j,len = 0;
    for(i=0;str[i]!='\0';i++)
    {
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        rev[j] = str[i];
    }
    printf("The reverse of the string is: %s\n",rev);
}
