#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "r");
    char ch[40];

    if(file == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        printf("the file is opened\n");
        while(!feof(file))
        {
            fgets(ch, sizeof(ch), file);
            printf("%s",ch);
        }

        fclose(file);
    }
}


