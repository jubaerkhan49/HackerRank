#include <stdio.h>
int main()
{
    int a,b,sum,diff;
    float x,y,sum2,diff2;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    sum = a + b;
    diff = a - b;
    sum2 = x + y;
    diff2 = x - y;
    printf("%d %d\n",sum,diff);
    printf("%0.1f %0.1f\n",sum2,diff2);
    return 0;
}
