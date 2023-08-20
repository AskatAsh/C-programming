#include<stdio.h>
int main()
{
    char string[20] = "Good Evening";

    strupr(string);
    printf("Uppercase string: %s\n",string);

    strlwr(string);
    printf("Lowercase string: %s\n",string);
}
