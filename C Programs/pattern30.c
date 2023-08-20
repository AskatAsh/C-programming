#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=n-i;j>=1;j--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(j=i-1;j>5=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
