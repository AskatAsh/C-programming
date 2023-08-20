#include<stdio.h>
int main()
{
    int a=23,b=45,temp;
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;

    printf("before swap: a = %d and b = %d\n",*ptr1,*ptr2);
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("after swap: a = %d and b = %d\n",*ptr1,*ptr2);

}
