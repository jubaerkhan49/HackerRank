#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int k[n];
    int temp[n];
    for (i = 0; i < n; i++){
        scanf("%d",&k[i]);
    }
    for (i = 0,j = (n-1); i < n; i++,j--){
        temp[i] = k[j];
    }
    for (i = 0; i < n; i++){
        k[i] = temp[i];
    }
    for (i = 0; i < n; i++){
        printf("%d ",k[i]);
    }
    return 0;
}
