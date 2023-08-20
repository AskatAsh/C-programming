#include<stdio.h>
#include<math.h>
int main()
{
    int i,N,prime=1;
    scanf("%d",&N);
    int n = sqrt(N);
    printf("round of n = %d\n",n);
    if(N>1){
        for(i=2;i<=n;i++)
        {
            if(N%i == 0)
            {
                prime=0;
                break;
            }
        }
        if(prime == 0){
            printf("NO\n"); // Not prime
        }
        else
        {
            printf("YES\n"); // Prime
        }
    }
    return 0;
}