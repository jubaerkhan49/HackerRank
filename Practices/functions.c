#include <stdio.h>
int max(int a,int b,int c,int d)
{
     if ( a > b && a > c && a > d ){
      return a;
     }
     else if ( b > c && b > d){
      return b;
     }
     else if ( c > d){
      return c;
     }
     else {
      return d;
     }
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d\n", ans);

    return 0;
}
