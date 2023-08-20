#include<stdio.h>

void display_string(char str[]);
int char_number(char str[]);
int main()
{
    char string[] = "My name is Ash";
    display_string(string);
    char_number(string);
}

void display_string(char str[])
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c ",str[i]);
        len++;
    }
    printf("\n\nLength of string: %d\n",len);
}
int char_number(char str[])
{
    int i,num=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i] == ' '){
            continue;
        }
        num++;
    }
    printf("\n\nNumber of character in string: %d\n",num);
}
