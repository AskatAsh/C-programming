#include<stdio.h>
int main(){
    int i,n,sum=0;

    scanf("%d",&n);

    //printf("sum = sum + i\n");
    for(i=n;i>0;i-=3){
        if(i>3){
        printf("%d + ",i);3
        }
        else{
        printf("%d",i);
        }
        sum = sum+i;

        //printf(" = %d\n",sum);
    }
    printf(" = %d\n",sum);
}
