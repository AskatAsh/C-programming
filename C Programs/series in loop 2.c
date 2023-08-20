#include<stdio.h>
int main(){
    int i,n,sum=0;

    scanf("%d",&n);

    //printf("sum = sum + i\n");
    for(i=n;i>(n-20);i--){
        if(i>(n-19)){
        printf("%d + ",i);
        }
        else{
            printf("%d",i);
        }
        sum = sum+i;
        ///printf(" = %d\n",sum);
    }
    printf(" = %d\n",sum);
}
/***
n-20  =20 tomo pod
50-20=30
30-20=10
40-20=20

*/
