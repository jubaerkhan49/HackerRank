#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
	vector<int> fib;
	int n, sum = 0;
	cout << "How many fibonacci number you want?" << endl;
	cin >> n;
	
	if (n <= 0)
	{
		cout << "Invalid integer input for fibonacci!" << endl;
		return 1;
	}
	
	fib.push_back(0);
	fib.push_back(1);

	for (int i = 0; i < n - 2; ++i)
	{
		sum = fib.at(i) + fib.at(i+1);
		fib.push_back(sum);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << fib.at(i) << ' ' ;
	}
	cout << endl;
	return 0;
}
