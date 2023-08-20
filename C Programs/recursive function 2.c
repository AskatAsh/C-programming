#include<stdio.h>

int odd_sum(int num);
int main(){
    int x=9,y;

    printf("Odd sum from 1 to %d is %d\n",x,odd_sum(x));
}

int odd_sum(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num+odd_sum(num-2);
    }
}
