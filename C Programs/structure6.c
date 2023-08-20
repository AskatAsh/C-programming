#include<stdio.h>
#include<string.h>
struct per_info{
    char name[20];
    int age;
    float salary;
};

void display(struct per_info p1);

int main()
{
    struct per_info person;
    strcpy(person.name, "Abul Kashem");
    person.age = 23;
    person.salary = 45000.789;

    display(person);
}
void display(struct per_info p1)
{
    printf("Name: %s\n",p1.name);
    printf("Age: %d\n",p1.age);
    printf("Salary: %.2f",p1.salary);
}
