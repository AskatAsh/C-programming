#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "r");
    char ch[20];
    char ch2[20];
    int age;

    if(file == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        printf("the file is opened\n");
        while(!feof(file))
        {
            fscanf(file,"%s %s %d",&ch,&ch2,&age);
            printf("%s %s %d\n",ch,ch2,age);
        }

        fclose(file);
    }
}


