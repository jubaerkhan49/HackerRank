#include <stdio.h>
void update(int *a, int *b);

int main()
{
      int x,y;
      scanf("%d",&x);
      scanf("%d",&y);
      update(&x,&y);
      return 0;
}
void update(int *a, int *b)
{
      int sum, sub;
      sum = (*a + *b);
      sub = (*a - *b);
      if ( sub < 0)
      {
            sub = -sub ;
      }
      printf("%d\n",sum);
      printf("%d\n",sub);
}
