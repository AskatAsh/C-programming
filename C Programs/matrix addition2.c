#include<stdio.h>
int main()
{
    int i,j,m,n;
    int A[10][10], B[10][10], C[10][10];

    printf("Number of rows and cols: ");
    scanf("%d %d",&m,&n);
    printf("Enter elements for A matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements for B matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    printf("A =");
    for(i=0;i<m;i++)
    {
        printf("\t");
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("B =");
    for(i=0;i<m;i++)
    {
        printf("\t");
        for(j=0;j<n;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Addition of matrix A and B
    printf("A+B = ");
    for(i=0;i<m;i++)
    {
        printf("\t");
        for(j=0;j<n;j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}




