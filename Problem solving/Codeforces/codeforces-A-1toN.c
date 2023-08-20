#include<stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=num-1;i++){
        printf("%d\n",i);
    }
    printf("%d",num);
    return 0;
}