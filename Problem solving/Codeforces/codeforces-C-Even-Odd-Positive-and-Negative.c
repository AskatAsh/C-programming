#include<stdio.h>
int main()
{
    int i,N,nums,even,odd,positive,negative;
    even=0,odd=0,positive=0,negative=0;

    scanf("%d",&N);
    for(i=1;i<=N;i++){
        scanf("%d",&nums);
        if(nums%2 == 0){
            even += 1;
        }
        if(nums%2 != 0){
            odd += 1;
        }
        if(nums > 0){
            positive += 1;
        }
        if(nums < 0){
            negative += 1;
        }
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
    return 0;
}