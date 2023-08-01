#include <bits/stdc++.h>
using namespace std;

int counting_valley(string s, int n);

int main()
{
	int n;
	cin >> n;
	string valley;
	cin >> valley;
	
	int hike = counting_valley(valley, n);
	cout << hike << endl;
}

int counting_valley(string s, int n)
{
	int count = 0, res = 0;
	n--;
	for (int i = 0; i < n; ++i)
	{
		s[i] == 'U' ? count++ : count--;
		
		if (count == -1 && s[i+1] == 'U')
		{
			res++;
		}
	}
	return res;
}