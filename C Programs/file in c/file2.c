#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[20] = " is my name.";
    int len = strlen(name);
    int i;

    file = fopen("test.txt","a");

    if(file == NULL)
    {
        printf("file doesn't exist\n");
    }
    else
    {
        for(i=0;i<len;i++)
        {
            fputc(name[i],file);
        }
        printf("file is written successfully\n");
        fclose(file);
    }

}
