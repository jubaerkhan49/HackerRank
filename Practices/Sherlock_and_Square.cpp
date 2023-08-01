#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, a, b, ct = 0;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		int x = sqrt(a), y = sqrt(b);
		
		if (a != x * x) x++;
			
		for (int i = x; i <= y; ++i) ct++;
		cout << ct << endl;
		ct = 0;
	}
}