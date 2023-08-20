#include<stdio.h>
int main(){
    int a,b;

    scanf("%d %d",&a,&b);

    int big = (a>b ? a:b);

    printf("%d",big);
}
