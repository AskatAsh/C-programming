#include<stdio.h>
#include<string.h>
int main()
{
    char firstBro1[100];
    char firstBro2[100];
    char secondBro1[100];
    char secondBro2[100];
    scanf("%s %s",&firstBro1,&firstBro2);
    scanf("\n");
    scanf("%s %s",&secondBro1,&secondBro2);

    // printf("%s %s\n",firstBro1,firstBro2);
    // printf("%s %s\n",secondBro1,secondBro2);

    int result = strcmp(firstBro2,secondBro2);
    // printf("%d\n",result);
    if(result == 0){
        printf("ARE Brothers\n");
    }
    else{
        printf("NOT\n");
    }

    return 0;
}