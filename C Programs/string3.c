#include<stdio.h>
int main()
{
    char str[30];
    int i=0;

    printf("Enter your fool nam: ");
    //scanf("%s",&str); //can't take whitespace as an input;

    gets(str);

    //printf("Your foll nem is: %s",str);
    //puts(str);
    /**for(i=0;i<6;i++)
    {
        printf("%c\n",str[i]);
    }**/

    while(str[i] != '\0')
    {
        printf("%c\n",str[i]);
        i++;
    }
}

