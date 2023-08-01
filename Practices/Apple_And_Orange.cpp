#include <bits/stdc++.h>
using namespace std;
int main()
{
	int s, t, a, b, m, n, res_1, res_2, count_1 {0}, count_2 {0};
	int *apple, *orange;
	
	cin >> s >> t >> a >> b >> m >> n;
	apple = new int [m];
	orange = new int [n];
	
	for (int i = 0; i < m; ++i)
	{
		cin >> apple[i];
		apple[i] += a;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> orange[i];
		orange[i] += b;
	}
	
	for (int i = 0; i < m; ++i)
	{
		if (apple[i] >= s && apple[i] <= t) count_1++;
	}
	
	for (int i = 0; i < n; ++i)
	{
		if (orange[i] >= s && orange[i] <= t) count_2++;
	}
	
	cout << count_1 << endl << count_2 << endl;
	
	delete [] apple;
	delete [] orange; 
	return 0;
}