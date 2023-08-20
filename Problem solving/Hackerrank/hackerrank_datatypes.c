#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    long int b;
    float c;
    char d;
    scanf("%d",&a);
    scanf("%ld",&b);
    scanf("%f",&c);
    scanf(" %c",&d);
    
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%.2f\n",c);
    printf("%c\n",d);
    return 0;
}
