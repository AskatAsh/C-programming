#include <stdio.h>
int main()
{
    int n, num, i, j;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        long long fact = 1;
        scanf("%d", &num);
        for (j = 1; j <= num; j++)
        {
            fact = fact * j;
        }
        printf("%lld\n",fact);
    }
    return 0;
}