#include <iostream>
using namespace std;
long long mod = 1000000000+7;
int main()
{
	long long n, ans;
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		ans = ((n%mod)*(n%mod))%mod;
		cout << ans << endl;
	}
}