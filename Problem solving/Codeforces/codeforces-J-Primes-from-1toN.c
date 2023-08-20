#include <stdio.h>
int main()
{
    int i, N, j, prime;
    scanf("%d", &N);
    for (i = 2; i <= N; i++)
    {
        prime=0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0 && i!=2)
            {
                prime=0;
                break;
            }
            else{
                prime=1;
            }
        }
        if(prime == 1 || i==2){
            printf("%d ",i);
        }
    }
    return 0;
}