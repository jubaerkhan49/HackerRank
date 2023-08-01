#include <stdio.h>
int main()
{
    char str[1000];
    int i, len;
    for (i = 0; scanf("%s",str) == 1; i++){
            printf("%s\n",str);
    }
    return 0;
}

