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
    struct person per2,per3,per4 = per1;
    //per2 = {"Nasa uddin", 45, 2342.50}; // not valid
    strcpy(per2.name, "Bulu mia");
    per2.age = 45;
    per2.salary = 2423.50;
    per3 = per2;

    if(strcmp(per1.name, per3.name) == 0 && per1.age == per3.age && per1.salary == per3.salary)
    {
        printf("person1 and person3 are equal\n");
    }
    else
    {
        printf("person1 and person3 are not equal\n");
    }
}

