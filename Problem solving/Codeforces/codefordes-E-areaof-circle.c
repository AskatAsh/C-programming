#include <stdio.h>

int main()
{
    double pi = 3.141592653;
    double r, area;

    scanf("%lf", &r);

    area = pi * r * r;
    printf("%.9lf\n", area);

    return 0;
}
