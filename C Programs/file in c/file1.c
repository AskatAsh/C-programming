#include<stdio.h>
int main()
{
    FILE *file;

    file = fopen("sample.txt","w");

    if(file == NULL)
    {
        printf("file doesn't exist\n");
    }
    else{
        printf("file is opened\n");
        fclose(file);
    }
}
