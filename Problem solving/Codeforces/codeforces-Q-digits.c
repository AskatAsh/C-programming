#include <stdio.h>
int main()
{
    int t, n, i, j, rem, div;
    scanf("%d", &t);
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0 ");
        }
        else
        {
            while (n)
            {
                rem = n % 10;
                printf("%d ", rem);
                n = n / 10;
            }
            // printf("\n");
        }
        printf("\n");
    }
    return 0;
}