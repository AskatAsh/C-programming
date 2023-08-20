#include<stdio.h>
int main(){
    int i,j,len=0;
    char str1[30] = "My name is ";
    char str2[] = "M.A. Askat";

    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }
    //printf("str1 = %d\n",len);
    for(j=0;str2[j]!='\0';j++)
    {
        str1[len+j] = str2[j];
    }
    printf("str1 + str2 = %s\n",str1);
}
