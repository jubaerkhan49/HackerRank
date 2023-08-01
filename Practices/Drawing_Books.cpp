#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    
	n /= 2;
	p /= 2;
	
	cout << (n - p < p ? n - p : p);
}