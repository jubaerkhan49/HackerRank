#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sqnc[50], temp[52];
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) cin >> sqnc[i];
	int k = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (i == sqnc[j-1]) temp[k++] = j;
		}
	}
	
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (temp[i-1] == sqnc[j-1]) cout << j << endl;
		}
	}
}