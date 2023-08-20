#include<stdio.h>
int main()
{
    int n,i,fibo,first,second;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i == 1){
            first = 0;
            // second = 1;
            printf("%d ",first);
        }
        else if(i == 2){
            // first = 0;
            second = 1;
            printf("%d ",second);
        }
        else{
            fibo = first + second;
            first = second;
            second = fibo;
            printf("%d ",fibo);
        }
    }
    return 0;
}