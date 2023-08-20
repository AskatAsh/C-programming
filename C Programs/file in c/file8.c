#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("Student.txt", "a");
    char name[20];
    int age,mobile,num;

    if(file == NULL)
    {
        printf("the file does not exist\n");
    }
    else
    {
        printf("the file is opened\n");

        printf("Enter the number of students: ");
        scanf("%d",&num);
        for(int i=1; i<=num; i++)
        {
            printf("Enter your full name: ");
            scanf("\n");
            gets(name);
            printf("Enter your age: ");
            scanf("%d",&age);
            printf("Enter your mobile number: ");
            scanf("%d",&mobile);

            fprintf(file, "%s\t\t\t%d\t\t%d\n",name,age,mobile);
        }

        fclose(file);
    }
}


