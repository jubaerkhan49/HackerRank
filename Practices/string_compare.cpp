#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	
	if (a == b) cout << "String A and String B are equal" << endl;
	else if (a > b) cout << "String A is greater than String B" << endl;
	else cout << "String A is less than String B" << endl;
	
	cout << a + b << endl;
	return 0;
}