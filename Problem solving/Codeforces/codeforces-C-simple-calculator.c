#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);

    long long sum = X + Y;
    long long product = X * Y;
    long long difference = X - Y;

    printf("%lld + %lld = %lld\n", X, Y, sum);
    printf("%lld * %lld = %lld\n", X, Y, product);
    printf("%lld - %lld = %lld\n", X, Y, difference);

    return 0;
}
