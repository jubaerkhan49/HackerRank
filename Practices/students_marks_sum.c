#include <stdio.h>

int main()
{
      int n,i,sum = 0;
      scanf("%d",&n);
      int marks[n];
      char ch;
      for ( i = 0; i < n; i++){
            scanf("%d",&marks[i]);
      }
      scanf("%c%c",&ch,&ch);

      if ( ch == 'b'){
             for ( i = 0; i <= (n / 2); i++){
                  sum+= marks[2*i];
            }
            printf("%d\n",sum);
      }
      else {
             for ( i = 0; i < (n / 2); i++){
                  sum+= marks[2*i + 1];
            }
            printf("%d\n",sum);
      }
      return 0;
}
