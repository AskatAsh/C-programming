#include<stdio.h>
int main(){
    int a,b,tcase;
    scanf("%d",&tcase);

    for(int i=1;i<=tcase;i++){
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
}
