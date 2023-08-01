#include <stdio.h>
int main( )
{
      int t, i,n ;
      scanf("%d",&t);
      for ( i = t ; i != 0; i--){
            scanf("%d",&n);

            if ( n % 2 == 0) {
                  printf("even\n");
            }
            else {
                  printf("odd\n");
            }
      }
      return 0;
}
