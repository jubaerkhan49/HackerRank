#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	string num;
	cin >> num;
	
	ll int n = 0, temp;
	int k = num.size(), j = 0, ct = 0;
	for (int i = k - 1; i >= 0; --i, ++j) {
		temp = ((int)num[i] - 48) * pow(10, j);
		n += temp;
	}
	for (int i = 0; i < k; ++i) {
		temp = (int)num[i] - 48;
		if (temp != 0) {
			if (n % temp == 0)
				ct++;
		}
	}
	cout << ct;
}

int main()
{
	int t;
	cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
}