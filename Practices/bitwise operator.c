#include <stdio.h>
int main( )
{
      int and,or,xor;
      int i, j,k,n,m = 0;
      int max1 = 0, max2 = 0, max3 = 0;
      scanf("%d %d",&n,&k);
      for ( i = 1; i < n; i++){
            for ( j = i + 1; j <= n; j++){
                  and = i & j;
                  or = i | j ;
                  xor = i^j ;
                  if ( and >= max1 && and < k){
                        max1 = and;
                  }
                    if ( or >= max2 && or < k){
                        max2 = or;
                  }
                    if ( xor >= max3 && xor < k){
                        max3 = xor;
                  }

            }
      }
      printf("%d\n%d\n%d\n",max1,max2,max3);
      return 0;
}
