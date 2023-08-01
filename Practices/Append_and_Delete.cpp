#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int k, i = 0;
    cin >> s >> t >> k;

    int L1 = s.size(), L2 = t.size(), L = L1 + L2;


    while (s[i] == t[i] && (isalpha(s[i]) && isalpha(s[i]))) i++;
	   n
    bool ok = (L - i * 2 <= k && L1 % 2 == k % 2 && L < k);
    cout << (ok ? "Yes" : "No");
}