#include <stdio.h>
int main()
{
    int a, b, i, j, rem, lucky,count=0;
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++)
    {
        j = i;
        lucky=0;

        while (j != 0)
        {
            rem = j % 10;
            j = j / 10;
            if (rem == 4 || rem == 7)
            {
                lucky++;
            }
            else
            {
                lucky = 0;
                break;
            }
        }

        if(lucky >= 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    if(count == 0){
        printf("-1");
    }
}
