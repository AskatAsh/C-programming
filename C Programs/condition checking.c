#include<stdio.h>
int main(){
    int A=5,B=6,C=10;

    if((A<B && B%4==0) || (C%5==0)){
        printf("true");
    }
    else{
        printf("false");
    }
}

/***

A < 5           false
A+B == 11       true
(A*C)%5 == 0    true
A>=B            false
!(A>B)          true
(A<B) && (B<C)  true
(A<B) || (B<C)  true
(A>=B) || (B<C) true
(A>B) && (B<C)  false
!(A%5==0 && B%5==0) true
(A<B && B%4==0) || (C%5==0) true

*/
