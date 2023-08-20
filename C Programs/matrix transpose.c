#include<stdio.h>
int main()
{
    int row,col,i,j,mat[10][10],transpose[10][10];

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

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }

     printf("\nThe Tanspose matrix is :\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
