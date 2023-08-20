#include<stdio.h>

void swapping(int *ptr1, int *ptr2){
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    //printf("x and y after swapping x = %d and y = %d\n",*ptr1,*ptr2);
}
int main(){
    int x=33, y=83;
    printf("x and y before swapping x = %d and y = %d\n",x,y);

    /// function calling
    swapping(&x, &y);
    printf("x and y after swapping x = %d and y = %d\n",x,y);
}
