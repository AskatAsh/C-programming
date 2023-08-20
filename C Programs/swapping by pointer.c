#include<stdio.h>
int main(){
    int x=23, y=34, temp;
    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    /// now swapping
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("swapped value of x=23 and y=34 is:\n");
    printf("x = %d and y = %d\n",x,y);
}
