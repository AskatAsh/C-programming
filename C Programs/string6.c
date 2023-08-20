#include<stdio.h>
int main()
{
    char str[20],newStr[20];
    gets(str);

    strcpy(newStr,str);

    printf("The string that is to be copied is : %s\n",str);
    printf("The new string after copy is : %s\n",newStr);

}
