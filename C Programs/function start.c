#include<stdio.h>

int summing (int a, int b);
int main(){
    int x=10,y=56;
    printf("Sum of %d and %d is %d",x,y,summing(x,y));
}

int summing (int a, int b){
    int sum;
    sum = a+b;
    return sum;
}
