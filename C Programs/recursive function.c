#include<stdio.h>

int facto (int x);

int main(){
    int num=5;
    printf("Factorial of %d is %d\n",num,facto(num));
}

int facto (int x){
    if(x==1){ /// base case
        return 1;
    }
    else{
        return x*facto(x-1); ///recursive function
    }
}
