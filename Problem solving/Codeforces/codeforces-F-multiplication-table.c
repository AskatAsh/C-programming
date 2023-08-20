#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=11;i++){
        printf("%d * %d = %d\n",n,i,(n*i));
    }
    printf("%d * %d = %d",n,12,(n*12));
    return 0;
}