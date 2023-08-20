#include <stdio.h>
int main()
{
    int num = 1999;
    int x, i;
    for (i = 1; x!=1999; i++)
    {
        scanf("%d", &x);
        x = x % 10000;
        if(x == 1999){
            printf("Correct\n",x);
            break;
        }
        else{
            printf("Wrong\n");
        }
    }

    return 0;
}