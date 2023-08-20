#include<stdio.h>
int main(){
    int i=1, j=10, k=20;
    for(; i<=j || i<=k; i++,j--, k-=2){
        printf("%d %d %d\n",i,j,k);
    }
    printf("False condition: %d %d %d\n",i,j,k);
}
