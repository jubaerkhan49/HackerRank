#include <stdio.h>
#define MAX 100
int main()
{
	int arr[MAX], n;
	
	double count_positive = 0;
	double count_negative = 0; 
	double count_zero = 0;
	
	scanf("%d", &n);
	if (n > 100)
	{
		return 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > 0)
		{
			count_positive++;
		}
		else if (arr[i] < 0)
		{
			count_negative++;
		}
		else
		{
			count_zero++;
		}
	}
	
	count_positive /= n;
	count_negative /= n;
	count_zero /= n;
	
	printf("%0.6lf\n", count_positive);
	printf("%0.6lf\n", count_negative);
	printf("%0.6lf\n", count_zero);
	
	return 0;
}