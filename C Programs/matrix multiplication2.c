#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10],i,j,k,result[10][10],r1,c1,r2,c2;
    int sum = 0;

    printf("Enter row and col for first matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter row and col for second matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1 != r2)
    {
        printf("Column of first matrix and row of second matrix not equal!!!\n\n");

        printf("Enter row and col for first matrix: ");
        scanf("%d %d",&r1,&c1);

        printf("Enter row and col for second matrix: ");
        scanf("%d %d",&r2,&c2);
    }
    // first matrix input
    printf("Enter first matrix input:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("matrix1[%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    // second matrix input
    printf("Enter second matrix input:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("matrix2[%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

        /// r1 = 3, c1 = 2

    ///Matrix 1 = 1 2
    ///           3 4
    ///           5 6

    /// r2 = 2, c2 = 3

    ///Matrix 2 = 1 2 3
    ///           4 5 6
    // Matrix Multiplication
     for(i=0;i<r1;i++)  /// 0<3
    {
        for(j=0;j<c2;j++)   /// 0<3
        {
            for(k=0;k<c1;k++)   /// 0<2
            {
                sum = sum + mat1[i][k]*mat2[k][j];

             ///sum = 0 + mat1[0][1]*mat2[1][2];
             ///sum = 0 + 1*1 = 1;
             ///sum = 1 + 2*4 = 9; r00 = 9
             ///sum = 0 + 1*2 = 2;
             ///sum = 2 + 2*5 = 10; r01 = 12
             ///sum = 0 + 1*3 = 3;
             ///sum = 3 + 2*6 = 15; r02 = 15
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    // printing first matrix
    printf("First Matrix:\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",mat1[i][j]);

        }
        printf("\n");
    }

    // printing second matrix
    printf("Second Matrix:\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

    // printing multiplied matrix
    printf("Multiplide Matrix:\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

}
