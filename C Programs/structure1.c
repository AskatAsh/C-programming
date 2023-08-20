#include<stdio.h>

struct student{
    int id;
    float gpa;
};
int main()
{
    struct student s1,s2;

    //s1.id = 1932067;
    //s2.gpa = 3.2341;
    scanf("%d %f",&s1.id, &s2.gpa);

    printf("Student info: \n");
    printf("The id is : %d\n",s1.id);
    printf("The gpa is : %.2f\n",s2.gpa);
}
