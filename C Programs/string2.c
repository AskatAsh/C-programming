#include<stdio.h>
int main()
{
    char str[30];

    printf("Enter your fool nam: ");
    //scanf("%s",&str); //can't take whitespace as an input;

    gets(str);
    printf("Your foll nem is: %s",str);
    //puts(str);
}
