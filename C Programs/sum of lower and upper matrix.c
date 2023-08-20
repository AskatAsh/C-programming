#include<stdio.h>
int main()
{
    int row,col,i,j,mat[10][10],upperSum=0,lowerSum=0;

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

    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i < j)
            {
                upperSum = upperSum + mat[i][j];
            }
            if(i > j)
            {
                lowerSum = lowerSum + mat[i][j];
            }
        }
    }

    printf("\nSum of Upper triangle is : %d\n",upperSum);
    printf("\nSum of lower triangle is : %d\n",lowerSum);
}


