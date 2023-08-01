#include <iostream>
#include <vector>
using namespace std;
int n, m;
int main()
{
	int i {0}, k {0}, count {0};
	cin >> n >> m;
	vector<int> list_one(n), list_two(m);
	for (int i = 0; i < n; i++)
	{
		cin >> list_one.at(i);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> list_two.at(i);
	}
	k = list_one.at(n-1);
	for (i = 1; k <= list_two.at(0);)
	{
		bool no_factor = false ;
		
		for (int j = 0; j < list_one.size(); j++)
		{
			if ((k % list_one.at(j)) != 0)
			{
				no_factor = true;
				break;
			}
		}
		if (no_factor == true)
		{
			++i;
			k = list_one.at(n-1) * i;
			continue;
		}
		for (int j = 0; j < list_two.size(); j++)
		{
			if ((list_two.at(j) % k) != 0)
			{
				no_factor = true;
				break;
			}
		}
		if (no_factor == true)
		{
			++i;
			k = list_one.at(n-1) * i;
			continue;
		}
		else
		{
			count++;
		}
		i++;
		k = list_one.at(n-1) * i;	
	}
	cout << count << endl;
	return 0;
}