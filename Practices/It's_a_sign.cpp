#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <string> sign(4);
	string temp;
	bool ok = false;

	for (int i = 0; i < 4; ++i)
	{
		cin >> sign.at(i);
		temp = sign.at(i);
		reverse(temp.begin(), temp.end());
		if (temp == sign.at(i)) ok = true;
		temp.clear();
	}
	cout << (ok ? "Open" : "Trash") ;
}