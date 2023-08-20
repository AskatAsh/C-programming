#include<stdio.h>
int main(){
    int n,m,x,y;
    //float m;
    char ch[10],text[10];
    scanf("%2d %d %*f %3s %s", &n, &m, ch, text);
    printf("%d  %d  %s  %s", n, m, ch, text);

    ///scanf("%2d %d %*f %5s", &x, &y, text);
/* input: 1234  5.7  elephant */
///printf("%d  %d  %s", x, y, text);
}
