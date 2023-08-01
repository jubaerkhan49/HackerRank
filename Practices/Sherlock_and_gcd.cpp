#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (a == 0) return b;
	return gcd(b%a, b);
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int tmp, n, ans;
		bool ok = false;
		cin >> n;
		for (int i = 1; i <= n; ++i) {
			cin >> tmp;
			ans = gcd(ans, tmp);
		}
		cout << (ans == 1 ? "YES" : "NO");
		cout << endl;
	}
	return 0;
}