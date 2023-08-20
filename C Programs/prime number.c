#include<stdio.h>
#include<math.h>
int main(){
    int t,tc,i,j,m,n,count=0,num;

    scanf("%d",&tc);
    for(t=1;t<=tc;t++){
        scanf("%d %d",&m,&n);
        for(i=m;i<=n;i++){
            num = sqrt(i);
            for(j=2;j<=num;j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0 && i!=1){
                printf("%d\n",i);
            }
            count = 0;
        }
    }
}
