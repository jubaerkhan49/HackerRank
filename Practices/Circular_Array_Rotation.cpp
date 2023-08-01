#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[100001], rotate[100001], range[501];
	int n, k, q;
	cin >> n >> k >> q;
	
	for (int i = 0; i < n; ++i) cin >> arr[i];
	
	for (int i = 0; i < q; ++i) cin >> range[i];
	
	
	for (int i = 0; i < n; ++i) rotate[(i+k) % n] = arr[i];
	
	for (int i = 0; i < q; ++i) cout << rotate[range[i]] << endl;
}