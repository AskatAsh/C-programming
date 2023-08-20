#include<stdio.h>
int main()
{
    int num = 27;
    int *p = &num; // p now has the address of num
    printf("value of num = %d\n",num);
    printf("address of num, &num = %x\n",&num); // address of num
    printf("value stored in address of num, *(&num) = %d\n",*(&num)); // value stored in address of num

    printf("*p = &num : %u\n",p);
}
