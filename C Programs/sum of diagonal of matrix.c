#include<stdio.h>
int main()
{
    int row,col,i,j,mat[10][10],transpose[10][10],sum=0;

    printf("Enter row and col of matrix: ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("mat[%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }

    printf("\nThe matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    printf("\nThe elements of the diagonal matrix is : ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i == j)
            {
                printf("%d ",mat[i][j]);
                sum = sum + mat[i][j];
            }
        }
    }

     printf("\nThe sum of diagonal elements of matrix is : %d\n",sum);
}

