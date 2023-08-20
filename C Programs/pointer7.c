#include<stdio.h>
int main()
{
    int x = 432;
    int *ptr;
    int **ptr2ptr;

    ptr = &x;
    ptr2ptr = &ptr;

    printf("The value of x is %d\n",**ptr2ptr);
    printf("The value of ptr2ptr is %d\n",*ptr2ptr);
    printf("The value of ptr is %d\n",*ptr);
    printf("The address of ptr is %d\n",ptr2ptr);
    printf("The address of x is %d\n",ptr);
}
