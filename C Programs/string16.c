#include<stdio.h>
int main()
{
    char str1[20] = "hello";
    char str2[20] = "Bangladesh";
    char temp[20];
    int i;

    printf("Before swapping:\n");
    printf("string 1 = %s\n",str1);
    printf("string 2 = %s\n",str2);
    for(i=0;str1[i]!='\0';i++)
    {
        temp[i] = str1[i];
    }
    //printf("temp = %s\n",temp);
    for(i=0;str2[i]!='\0';i++)
    {
        str1[i] = str2[i];
    }
    //printf("str1 = %s\n",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i] = temp[i];
    }
    //printf("str2 = %s\n",str2);
    printf("\nAfter swapping:\n");
    printf("string 1 = %s\n",str1);
    printf("string 2 = %s\n",str2);
}
