#include <stdio.h>
int main()
{
    int n, m, sum, i, x, y;

    while (scanf("%d %d", &n, &m) != EOF)
    {
        // scanf("%d %d",&n,&m);
        sum = 0;
        if (n > 0 && m > 0)
        {
            if (n > m)
            {
                x = m;
                y = n;
            }
            else
            {
                x = n;
                y = m;
            }
            for (i = x; i <= y; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("sum =%d\n", sum);
        }
        else{
            return 0;
        }
    }
    return 0;
}