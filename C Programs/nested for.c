#include<stdio.h>
int main(){
    int height,width;

    scanf("%d %d",&height,&width);
    for(int i=1;i<=width;i++){
        printf("*");
    }

    for(int i=1;i<=height-2;i++){
        ///printf("\n*       *\n");
        printf("\n*");
        for(int j=1;j<=width-2;j++){
            printf(" ");
        }
        printf("*");
    }

    printf("\n");
    for(int i=1;i<=width;i++){
        printf("*");
    }

}
