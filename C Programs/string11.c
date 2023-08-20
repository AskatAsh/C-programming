#include<stdio.h>
int main()
{
    char str1[] = "Hello World";
    char str2[] = "Hello World";

    int r = strcmp(str1,str2);

    if(r == 0)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }
}
