#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "a");
    char name[20];
    int age;
    if(file == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d",&age);

        fprintf(file, "Name = %s and Age = %d\n",name,age);

        printf("the file is opened\n");
        fclose(file);
    }
}
