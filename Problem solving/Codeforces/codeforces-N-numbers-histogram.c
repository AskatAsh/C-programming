#include<stdio.h>
int main()
{
    int num,n,i,j;
    char s;
    scanf("%c",&s);
    scanf("%d",&num);

    for(i=1;i<=num;i++){

        scanf("%d",&n);

        for(j=1;j<=n;j++){
            printf("%c",s);
        }
        printf("\n");
    }
    return 0;
}