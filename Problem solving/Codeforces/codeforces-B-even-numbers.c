#include <stdio.h>
int main()
{
    int i, num;
    scanf("%d", &num);
    if (num == 1)
    {
        printf("-1\n", num);
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
                continue;
            }
        }
    }

    return 0;
}