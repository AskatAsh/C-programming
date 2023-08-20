#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    int count = 1;
    for(i=1; i<=n; i++)
    {
        if(i<=3)
        {
            for(j=1; j<=n-(i-1); j++)
            {
                printf(" ");
            }
        }
        else
        {
            for(j=1; j<=n-i; j++)
            {
                printf(" ");
            }
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ",count);
            count += 2;
        }
        printf("\n");
    }

}



