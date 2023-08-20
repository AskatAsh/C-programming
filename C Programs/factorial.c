#include<stdio.h>
#include<math.h>
int main(){
    unsigned long long int n,fct,count,tcase,i,j;
    scanf("%d",&tcase);
    for(i=1;i<=tcase;i++){
        scanf("%d",&n);
        fct=1;
        for(j=1;j<n;j++){
           fct = fct*j;
        }
        fct=n*fct;
        printf("%llu\n",fct);
        //count = (fct==0)?1:log10(fct)+1;
        //printf("%d\n",count);
    }
}
