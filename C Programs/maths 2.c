#include<stdio.h>
#include<math.h>
int main()
{
    double num;
    scanf("%lf",&num);
    double result;

    //result = round(num);
    //printf("round of %.4lf : %.2lf\n",num,result);

    //result = trunc(num);
    //printf("trunc of %.4lf : %.2lf\n",num,result);

    //result = ceil(num);
    //printf("ceil of %.4lf : %.2lf\n",num,result);

    result = floor(num);
    printf("floor of %.4lf : %.2lf\n",num,result);
}
