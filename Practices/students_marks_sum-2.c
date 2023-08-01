#include <stdio.h>

int marks_summation(int marks[ ], int n, char ch)
{
      int i, sum = 0;
      switch (ch)
      {
      case 'b' :

            for ( i = 0; i <= (n / 2); i++){
                  sum+= marks[2*i];
            }

            break ;

      case 'g' :

            for ( i = 0; i < (n / 2); i++){
                  sum+=marks[2*i + 1];
            }

            break ;
      }
      return sum;
}


int main()
{
      int n,i,sum;
      scanf("%d",&n);
      int marks[n];
      char ch;
      for ( i = 0; i < n; i++){
            scanf("%d",&marks[i]);
      }
      scanf("%c%c",&ch,&ch);

      sum = marks_summation(marks, n, ch);
      printf("%d\n",sum);
      return 0;
}

