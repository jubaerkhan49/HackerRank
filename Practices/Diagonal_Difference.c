#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int diagonal_diff(int arr[MAX][MAX], int n);

int main()
{
	int arr[MAX][MAX];
    int n;
    scanf("%d", &n);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int difference = diagonal_diff(arr, n);
    printf("%d\n", difference);
	return 0;
}

int diagonal_diff(int arr[MAX][MAX], int n)
{
    int Sum = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)			
        {
            if (i == j)
            {
                Sum += arr[i][j];
            }
            
            if (j == (n - i) - 1)
            {
                sum += arr[i][j];
            }
        }
    }
	printf("%d ",sum);
	printf("%d ",Sum);
    int diff = abs(sum - Sum);
    return diff;
}
