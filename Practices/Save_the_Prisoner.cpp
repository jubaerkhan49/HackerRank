#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll int n, m, s;
	cin >> n >> m >> s;
	
	int ct = s - 1;
	
	int ans = (m + ct) % n;
	if (ans == 0) ans = n;
	
	cout << ans;
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