#include<stdio.h>

union test1{
    int x,y;
};
union test2{
    int a;
    char name[10];
};
union test3{
    double salary;
    char ch;
};
struct test4{
    int age;
    float amount;
    char place[20];
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;

    struct test4 t4;
    printf("sizeof(t1) = %d\n",sizeof(t1));
    printf("sizeof(t2) = %d\n",sizeof(t2));
    printf("sizeof(t3) = %d\n",sizeof(t3));
    printf("sizeof(t4) = %d\n",sizeof(t4));
}
