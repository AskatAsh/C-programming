#include <stdio.h>
int main()
{
    int a, b, n, i, j, rem, sum, total=0;
    scanf("%d %d %d", &n, &a, &b);

    for (i = 1; i <= n; i++)
    {
        j=i;
        sum = 0;
        while (j)
        {
            rem = j % 10;
            j = j / 10;
            sum = sum + rem;
        }
        // printf("%d ", i);
        if (sum >= a && sum <= b)
        {
            // printf("%d yes\n",i);
            total += i;
        }
        // else{
        //     printf("%d no\n",i);
        // }
    }
    printf("%d",total);
    return 0;
}