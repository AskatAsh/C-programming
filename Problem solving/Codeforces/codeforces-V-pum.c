#include<stdio.h>
int main()
{
    int n,i,j,x,y;
    scanf("%d",&n);
    x=1;y=0;
    for(i=1;i<=n;i++){
        for(j=x;j<=y+3;j++){
            printf("%d ",j);
        }
        x=j+1;
        y=j;
        printf("PUM\n");
    }
    return 0;
}