#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float result,f,c,r;
    scanf("%d %d",&a,&b);

    result = (float)a/b;
    f = floor(result);
    c = ceil(result);
    r = round(result);
    printf("floor %d / %d = %.0f\n",a,b,f);
    printf("ceil %d / %d = %.0f\n",a,b,c);
    printf("round %d / %d = %.0f\n",a,b,r);

    return 0;
}