#include<stdio.h>
int main()
{
    char str1[] = "hello world";
    char str2[] = "hello world";
    int i,r;

    for(i=0;str1[i] != '\0';i++)
    {
            if(str1[i] == str2[i])
            {
                r = 1;
            }
            else
            {
                r = 0;
                break;
            }
    }
    if(r == 1)
    {
        printf("The strings are equal\n");
    }
    else
    {
        printf("The strings are not equal\n");
    }

}
