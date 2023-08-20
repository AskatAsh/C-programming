#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");

    for(i=2;i<n;i++)
    {
        printf("*");
        for(j=1;j<=n-2;j++)
        {
            printf("#");
        }
        printf("*");
        printf("\n");
    }
    //printf("\n");

    for(i=1;i<=n;i++)
    {
        printf("*");
    }
}




