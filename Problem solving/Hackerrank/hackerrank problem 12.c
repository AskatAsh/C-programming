//maximum using bitwise operator
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int and=0,or=0,xor=0;
  int max_and = 0, max_or = 0, max_xor = 0;
  int i,j;

  for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
          and = i&j;
          or = i|j;
          xor = i^j;
          if(and<k && and>max_and)
          {
              max_and = and;
          }
          if(or<k && or>max_or)
          {
              max_or = or;
          }
          if(xor<k && xor>max_xor)
          {
              max_xor = xor;
          }

      }
  }

  printf("%d\n%d\n%d",max_and,max_or,max_xor);

}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}

