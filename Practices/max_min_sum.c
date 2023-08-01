#include <stdio.h>
#define MAX 5

long int max_sum(long int arr[], int max);
long int min_sum(long int arr[], int min);

int main()
{
	long int arr[MAX];
	int min = 0, max = 0 ;
	
	for (int i = 0; i < MAX; i++)
	{
		scanf("%ld", &arr[i]);
	}
	
	for (int i = 0; i < MAX; i++)
	{
		if (arr[max] > arr[i])
		{
			max = i;
		}
		
		if (arr[min] < arr[i])
		{
			min = i;
		}
	}
	
	long int Maximum_Sum = max_sum(arr, max);
	long int Minimum_Sum = min_sum(arr, min);
	
	printf("%d %d\n", Minimum_Sum, Maximum_Sum);
	return 0;
}

long int max_sum(long int arr[], int max)
{
	long int sum = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (i == max)
		{
			continue;
		}
		sum += arr[i];
	}
	return sum;
}

long int min_sum(long int arr[], int min)
{
	long int sum = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (i == min)
		{
			continue;
		}
		sum += arr[i];
	}
	return sum;
}