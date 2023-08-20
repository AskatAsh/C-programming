#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch >= 97 && ch <= 122){
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else if(ch >= 65 && ch <= 90){
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if(ch >= 48 && ch <= 57){
        printf("IS DIGIT\n");
    }
    return 0;
}