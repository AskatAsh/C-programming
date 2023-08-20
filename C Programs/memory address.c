#include<stdio.h>
int address(int x);
int main(){
    int y=10;
    address(y);
    printf("the address of y is %x\n",&y);
    address(y);
    printf("the address of y is %x\n",&y);
}

int address(int x){
    printf("the address of x is %x\n",&x);
}
