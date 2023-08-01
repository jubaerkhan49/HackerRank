#include <stdio.h>
int main( )
{
      int n, i, temp,sum ;
      int digit [5] ;
      scanf("%d",&n);
      temp = n ;
      for ( i = 4; temp >= 10;  i -- ){
            digit [i] = temp % 10 ;
            temp /=10 ;
      }
      digit[0] = temp ;
      sum = 0;
     for ( i = 0; i < 5; i++){
      sum += digit[i];
     }
     printf("%d\n",sum);
      return 0;
}
