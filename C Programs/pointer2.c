#include<stdio.h>
int main()
{
    int a=7;
    int *b;
    b = &a;

    printf("The value of a is: a = %d\n",a);
    printf("The address of a is: &a = %u\n",&a);
    printf("The value of b is: *b = %d\n",*b); //value at b or value at address of a
    printf("The address of a is: b = %u\n",b);
    printf("The address of b is: &b = %u\n",&b);
    printf("The value of a is: *(&a) = %d\n",*(&a)); //value at address of a
    printf("The value of b is: *(&b) = %d\n",*(&b)); //value at address of b which is the address of a

    return 0;

}
