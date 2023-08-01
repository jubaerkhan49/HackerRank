#include <stdio.h>
int max(int a, int b, int c, int d)
{
      int max1, max2;
      max1 = a > b ? a : b ;
      max2 = c > d ? c : d ;
      return max1 > max2 ? max1 : max2;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b, c, d);
    printf("%d\n", ans);

    return 0;
}
