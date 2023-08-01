#include <bits/stdc++.h>
#define mod 100000000+7
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		ll a, b, fib, ans;
		cin >> a >> b >> fib;
		if (fib == 1) cout << b << endl;
		else {
			for (int i = 2; i <= fib; ++i) {
				ans = a%(mod)+b%(mod)%(mod);
				a = b;
				b = ans;
			}
			cout << ans << endl;
		}
	}
}