#include <bits/stdc++.h>
using namespace std;
int main()
{
	int *arr, n, d, m, k, length = 0, sum = 0, count = 0;
	cin >> n;
	arr = new int [n];
	
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	cin >> d >> m;
	
	length = n - m + 1;
	k = m;
	for (int i = 0; i < length; ++i)
	{
		for (int j = i; j < k; ++j)
		{
			sum += arr[j];
		}
		if (sum == d) count++;
		sum = 0;
		k++;
	}
	cout << count << endl;
	delete [] arr;
}