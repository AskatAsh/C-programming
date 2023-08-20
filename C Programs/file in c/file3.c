#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "w");
    char name[20];

    if(file == NULL)
    {
        printf("file does not exist\n");
    }
    else
    {
        printf("Enter a string: ");
        gets(name);
        fputs(name, file);
        printf("file is written successfully\n");
        fclose(file);
    }
}
