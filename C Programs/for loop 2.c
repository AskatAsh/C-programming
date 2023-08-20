#include<stdio.h>
int main(){
    int i,n=20;
    int sum = 0;
    ///int pro = 1;

    printf("sum =\tsum\t+\ti\n");
    for(i=0;i<=n;i+=2){
        /**sum = sum+i;
       printf("i= %d sum = %d + %d\n",i,sum,i);*/
       printf("sum =\t%d",sum);
       printf("\t+\t%d",i);
       sum = sum+i;
       printf("\t= %d\n",sum);
    }
    printf("final sum = %d\n",sum);
}
