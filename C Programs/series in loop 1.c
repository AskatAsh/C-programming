#include<stdio.h>
int main(){
    int i,n,sum=0;

    scanf("%d",&n);

    printf("sum = sum + i\n");
    for(i=1;i<=n;i+=2){
        printf("%d + %d = ",sum,i);
        sum = sum+i;
        printf("%d\n",sum);
    }
    ///printf("\n%d",sum);
}
