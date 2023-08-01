#include <bits/stdc++.h>
using namespace std;

vector<string> str;

bool subStringFind(string query)
{
	bool found = false;
	int k = str.size();
	for (int i = 1; i < k; ++i)
	{
		found = str[i].find(query) != string::npos ? true : false ;
		if (!found) break;
	}
	return found;
}

int main()
{
	string temp;
	char ch;
	
	while (ch != '\n')
	{
		cin >> temp;
		cin.get(ch);
		str.push_back(temp);
	}
	temp.clear();
	temp = str.at(0);
	string query;
	vector<string> substring;
	
	for (int i = 0; i < temp.size(); ++i)
	{
		int k = 1;
		for (int j = i; j < temp.size(); ++j, ++k)
		{
			query = temp.substr(i,k);
			
			if (subStringFind(query)) substring.push_back(query);
			
		}
	}
	unsigned int max = 1;
	string big;
	
	for (int i = 0; i < substring.size(); ++i)
	{
		if (substring.at(i).size() >= max && substring.at(i) >= big)
		{
			max = substring.at(i).size();
			big = substring.at(i);
		}
	}
	
	cout << big;
	
}