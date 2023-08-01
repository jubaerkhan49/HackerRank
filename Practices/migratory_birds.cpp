#include <bits/stdc++.h>
#include <vector>
#define MAX 6
using namespace std;

// function prototypes
int maximum(vector<int> count, int n);
int minimum_bird(vector<int> count, int n);

int n;

int main()
{
	cin >> n;
	vector<int> birds_type(n), count(MAX);

	// input birds type 
	for (int i = 0; i < n; ++i)
	{
		cin >> birds_type.at(i);
	}

	// count the same type
	for (int i = 0; i < n; ++i)
	{
		count.at(birds_type.at(i))++;
	}
	
	int max = maximum(count, count.size());
	int min_bird = minimum_bird(count, count.at(max));

	cout << min_bird;

	
	cout << endl;
	return 0;

}

// maximum number of birds
int maximum(vector<int> count, int n)
{
	int max = 0;
	for (int i = 1; i < n; ++i)
	{
		if (count.at(max) < count.at(i))
		{
			max = i;
		}
	}
	return max;
}

//minimum index value among maximum birds
int minimum_bird(vector<int> count, int n)
{
	int i;
	for (i = 0; i < MAX; ++i)
	{
		if (count.at(i) == n)
		{
			break;
		}
	}
	return i;
}