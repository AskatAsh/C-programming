#include<stdio.h>
#include<string.h>
// global structure
struct student{
    int id;
    float gpa;
};
// global variable
struct student s1,s2;

int main()
{
    // local structure
    struct personal_info{
        char name[20];
        int age;
        float salary;
    };

    struct personal_info p1,p2,p3; // local variable

    // assigning values to structure members
    strcpy(p1.name, "Abul Kashem");
    p1.age = 24;
    p1.salary = 4301.565;

    printf("Personal info 1:\n\n");
    printf("Name : %s\n",p1.name);
    printf("Age : %d\n",p1.age);
    printf("Salary : %.2f\n",p1.salary);


    s1.id = 1932067;
    s1.gpa = 3.2341;
    //scanf("%d %f",&s1.id, &s1.gpa);

    printf("Student info 1: \n\n");
    printf("The id is : %d\n",s1.id);
    printf("The gpa is : %.2f\n",s1.gpa);

    s2.id = 1932040;
    s2.gpa = 4.5321;
    printf("\nStudent info 2: \n\n");
    printf("The id is : %d\n",s2.id);
    printf("The gpa is : %.2f\n",s2.gpa);
}
