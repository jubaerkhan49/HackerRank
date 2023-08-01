#include <stdio.h>
int main()
{
    int i ;
    int n;
    scanf("%d",&n);
    char num[20][10] = { "one","two","three","four","five","six","seven","eight","nine"};

    for ( i = 0; i <= 10; i++) {

            if ( n >= 1 && n < 10){
                        printf("%s\n",num[n-1]);
                        break;
                  }
                  else {
                        printf("Greater than 9\n");
                        break;
                  }
    }

      return 0;
}
