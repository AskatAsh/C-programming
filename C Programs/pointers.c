#include<stdio.h>
int main(){
    int x=10;
    int y=20;
    int *p, *q;
    p=&x;
    q=&y;
    printf("the value of x is %d\n",x);
    printf("the address of x is %d\n",&x);
    printf("the value of p is %d\n",p);
    printf("the value of *p is %d\n\n",*p);

    printf("the address of pointer *p is %d\n",&p);
    printf("the address of pointer *q is %d\n\n",&q);

    printf("the value of q is %d\n",q);
    printf("the address of y is %u\n",&y);
    printf("the value of y is %d\n",y);
    printf("the value of *q is %d\n\n",*q);

    int sum = *p + *q;
    printf("sum of two pointers p and q is %d\n",sum);
    printf("the address of the sum variable is %d\n",&sum);

    int *ptr = &sum;
    printf("the value of pointer *ptr is %d\n",*ptr);
    printf("the address of pointer *ptr is %d\n",ptr);
}
