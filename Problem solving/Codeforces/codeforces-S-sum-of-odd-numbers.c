#include <stdio.h>
int main()
{
    int n, m, sum, i, x, y,t;

    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&m);
        sum = 0;
        if (n >= 0 && m >= 0)
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
            for (i = x+1; i < y; i++)
            {
                if(i%2 != 0){
                    // printf("%d ", i);
                    sum = sum + i;
                }
                else{
                    continue;
                }
            }
            printf("%d\n", sum);
        }
    }
    return 0;
}