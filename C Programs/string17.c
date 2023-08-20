#include<stdio.h>
int main()
{
    char str1[20] = "hello";
    char str2[20] = "Bangladesh";
    char temp[20];

    printf("Before swapping:\n");
    printf("string 1 = %s\n",str1);
    printf("string 2 = %s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("\nAfter swapping:\n");
    printf("string 1 = %s\n",str1);
    printf("string 2 = %s\n",str2);
}
