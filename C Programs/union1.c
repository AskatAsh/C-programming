#include<stdio.h>
union test{
    int a,b;
};
int main()
{
    union test t1;
    t1.a = 23;
    printf("t1.a = %d\n",t1.a);
    printf("t1.b = %d\n\n",t1.b);

    t1.b = 56;
    printf("t1.a = %d\n",t1.a);
    printf("t1.b = %d\n",t1.b);
}
