#include<stdio.h>
#include<string.h>
struct info{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct info person[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter info of person %d:\n",i+1);
        printf("Enter name: ");
        gets(person[i].name);
        //fgets(person[i].name, sizeof(person[i].name), stdin);
        //person[i].name[strcspn(person[i].name, "\n")] = '\0';
        printf("Enter age: ");
        scanf("%d",&person[i].age);
        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
        printf("\n");
        scanf("%*c");
    }
    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("Information of person %d\n\n",i+1);
        printf("Name: %s\t\t",person[i].name);
        printf("Age: %d\t\t",person[i].age);
        printf("Salary: %.2f\t\t",person[i].salary);
        printf("\n\n");
    }
}
