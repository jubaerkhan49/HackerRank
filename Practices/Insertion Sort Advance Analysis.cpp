#include <iostream>
#define MAX 100000
#define TEST 15
using namespace std;

void InsertionSort(int arr[], int n)
{
	int j = 0, count = 0;
	while (j < n -1)
	{
		if (arr[j] <= arr[j+1])
		{
			j++;
		}
		else
		{
			if (j == 0)
			{
				swap(arr[j], arr[j+1]);
				count++;
			}
			else
			{
				swap(arr[j], arr[j+1]);
				count++;
				j--;
			}
		}
	}
	cout << count << endl;
}
int main()
{
	int arr[MAX];
	int i, t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (i = 0; i < n; i++)
		{
			cin >> arr[i] ;
		}
		InsertionSort(arr,n);
	}
	return 0;
}