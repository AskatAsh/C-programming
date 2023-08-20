#include <stdio.h>
#include <math.h>
int main()
{
    int num, rem, t, sum, i;
    scanf("%d", &t);

    while (t--)
    {
        sum = 0, i = 0, rem=0;
        scanf("%d", &num);

        while (num)
        {
            rem = num % 2;
            num = num / 2;
            // printf("%d ", rem);

            if (rem == 1)
            {
                sum = sum + pow(2, i);
                i++;
            }
            else
            {
                continue;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}