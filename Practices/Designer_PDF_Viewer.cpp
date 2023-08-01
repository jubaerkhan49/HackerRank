#include <bits/stdc++.h>
using namespace std;
int main()
{
	int max = 0, ct[130] = {0};
	string s;
	for (int i = 97; i <= 122; ++i) {
		cin >> ct[i];
	}
	getchar();
	getline(cin, s);
	
	int l = s.size();
	
	for (int i = 0; i < l; ++i) {
		
		if (max < ct[(int)s[i]]) {
			
			max = ct[(int)s[i]];
		}	
	}
	cout << l * max;
}