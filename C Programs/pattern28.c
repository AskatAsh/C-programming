#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    int count = 2;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",count);
            count += 2;
        }
        printf("\n");
    }

}


