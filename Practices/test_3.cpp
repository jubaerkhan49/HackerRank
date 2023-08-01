#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	
	while (a && b)
	{
		a >= b ? a %= b : b %= a;
	}
	cout << "GCD is " << a + b << endl;
	return 0;
}