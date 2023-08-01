#include <bits/stdc++.h>
using namespace std;
int main()
{
	int arr[101];
	int ct[105] = {0};
	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) cin >> arr[i];
	
	for (int i = 0; i < n; ++i)
	{
		ct[arr[i]]++;
	}
	int j = 0, temp[101];
	int k1, k2;
	for (int i = 1; i < 104; ++i)
	{
		if (ct[i] != 0)
		{
			k1 = ct[i] + ct[i+1];
			k2 = ct[i] + ct[i-1];
			temp[j++] = k1 > k2 ? k1 : k2;
		}
	}
	int max = 0;
	for (int i = 0; i < j; ++i)
	{
		if (temp[max] < temp[i]) max = i;
	}
	cout << temp[max];
}