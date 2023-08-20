#include<stdio.h>
int main(){
    int i,n,sum=0;

    scanf("%d",&n);

    //printf("sum = sum + i\n");
    for(i=2;i<(n*3);i+=3){
        if(i<(n*3)-1){
        printf("%d + ",i);
        }
        else{
            printf(" %d",i);
        }
        sum = sum+i;
        //printf("%d ",i);
    }
    printf(" = %d",sum);
}
