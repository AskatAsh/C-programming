#include <stdio.h>

int main() {
    unsigned long long N;
    scanf("%llu", &N);

    unsigned long long result = (((((((((N * (567%100)) - 357) + 7492) * (9879%100)) - 4787) * (7493%100)) - 498) * (1237%100)) + 100) * (9879%100) - 9;
    unsigned long long lastTwoDigits = result % 100;

    printf("result: %llu\n",result);
    printf("%02llu\n", lastTwoDigits);

    return 0;
}
