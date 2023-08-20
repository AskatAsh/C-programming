#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "r");
    char ch;

    if(file == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        printf("the file is opened\n");
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }
}

