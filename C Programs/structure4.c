#include<stdio.h>

struct info{
    int id;
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
        printf("id: ");
        scanf("%d",&person[i].id);
        printf("age: ");
        scanf("%d",&person[i].age);
        printf("salary: ");
        scanf("%f",&person[i].salary);
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        printf("Information of person %d:\n",i+1);
        printf("id: %d\t\t",person[i].id);
        printf("age: %d\t\t",person[i].age);
        printf("salary: %.2f\t\t",person[i].salary);
        printf("\n\n");
    }
}
