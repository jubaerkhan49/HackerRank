#include <stdio.h>
int main( )
{
    char num[10][40] = {"one","two","three","four","five","six","seven","eight","nine"};
    int i,a,b;
    scanf("%d %d",&a,&b);
    for ( i = a; i <= b; i++){
        if ( a >= 1 && a <= 9 ){
            printf("%s\n",num[a-1]);
            a++;
        }
        else if (a % 2 == 0){
            printf("even\n");
            a++;
        }
        else {
            printf("odd\n");
            a++;
        }
    }
    return 0;
}
