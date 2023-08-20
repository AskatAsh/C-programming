#include<stdio.h>
int main()
{
    int i=7;
    int *j=&i;
    int **k=&j;

    printf("the value of i is : %d\n",i);
    printf("j points to i : *j = %d\n",*j);
    printf("k points to j : **k = %d\n",**k);
    printf("j points to address of i: j = %u\n",j);
    printf("k points to address of j: k = %u\n",k);
    printf("address of i: &i = %u\n",&i);
    printf("address of j: &j = %u\n",&j);
    printf("address of k: &k = %u\n",&k);
    printf("value at address of i: *(&i) = %d\n",*(&i));
    printf("value at address of j: *(&j) = %d\n",*(&j));
    printf("value at address of k: *(&k) = %d\n",*(&k));
}
