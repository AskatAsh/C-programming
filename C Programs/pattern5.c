#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64); //ASCII 65=A,66=B;
        }
        printf("\n");
    }
}


