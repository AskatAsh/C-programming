#include<stdio.h>
int main(){
    int n=15;

    for(int col=1; col<=n; col++){
        for(int row=1; row<=n; row++){
            printf("%d\t",row*col);
        }
        printf("\n");
    }
}
