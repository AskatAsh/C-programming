#include<stdio.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Askat";

    strcat(str1,str2);

    printf("String 1: %s\n",str1);
    printf("String 2: %s\n",str2);
}
