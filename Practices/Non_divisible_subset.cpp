#include <iostream>
#include <algorithm>
using namespace std;
int min(int a, int b) {
	return (a < b ? a : b);
}
int main()
{
	long long tmp;
    int n, k, res = 0;
	int ct[105] = {0};
	cin >> n >> k;
    for (int i = 0; i < n; ++i) {
		cin >> tmp;
		ct[tmp%k]++;
	}
	for (int i = 0; i <= 100; ++i) {
		if (ct[i]) {
			if (i*2 == k || i*2 == 0) {
				res+=(ct[i]-1);
				ct[i] = 0;
			}
		}
	}
	int arr[101], j = 0;
	for (int i = 1; i <= 100; ++i) if (ct[i]) arr[j++] = i;
	int f = 0, l = j-1;
	while (f < l) {
		if (arr[f]+arr[l] == k) {
			res += min(ct[arr[f]], ct[arr[l]]);
			f++, l--;
		}
		else if (arr[f]+arr[l] < k) f++;
		else {
			l--;
		}
	}
	cout << n-res << endl;	
}
	
