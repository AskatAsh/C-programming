#include <stdio.h>
int main()
{
    // unsigned long long l1,r1,l2,r2;
    // scanf("%llu %llu %llu %llu",&l1,&r1,&l2,&r2);
    // if(l1<l2 && l2<r1){
    //     printf("%llu",l2);
    // }
    // if(l1<r2 && r2<r1){
    //     printf("%llu",r2);
    // }
    // if(l2<l1 && l1<r2){
    //     printf("%llu",l1);
    // }
    // if(l2<r1 && r1<r2){
    //     printf("%llu",r1);
    // }
    // if(r1<l2 || l1>r2 || r2<l1 || l2>r1){
    //     printf("-1");
    // }

    int l1, r1, l2, r2;
    scanf("%d %ld %d %d", &l1, &r1, &l2, &r2);

    if (l1 <= r2 && l2 <= r1)
    {
        int intersection1 = (l1>l2) ? l1 : l2;
        int intersection2 = (r1<r2) ? r1 : r2;
        printf("%d %d\n",intersection1,intersection2);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}