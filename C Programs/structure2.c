#include<stdio.h>
#include<string.h>

struct person{
    char name[20];
    int age;
    float salary;
};
int main()
{
    struct person per1 = {"Nasa uddin", 23, 4221.65};
    struct person per2,per3;
    //per2 = {"Nasa uddin", 45, 2342.50}; // not valid
    strcpy(per2.name, "Bulu mia");
    per2.age = 45;
    per2.salary = 2423.50;
    per3 = per2;

    printf("Personal info 1:\n\n");
    printf("Name: %s\n",per1.name);
    printf("Name: %d\n",per1.age);
    printf("Name: %.2f\n",per1.salary);

    printf("\nPersonal info 2:\n\n");
    printf("Name: %s\n",per2.name);
    printf("Name: %d\n",per2.age);
    printf("Name: %.2f\n",per2.salary);

    printf("\nPersonal info 3:\n\n");
    printf("Name: %s\n",per3.name);
    printf("Name: %d\n",per3.age);
    printf("Name: %.2f\n",per3.salary);
}
