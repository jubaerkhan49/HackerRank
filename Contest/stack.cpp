#include <iostream>
#include <stack>
using namespace std;
int main()
{
	stack <int> s;
	s.push(10);
	s.push(20);
	int x = s.top();
	cout << x << endl;
	return 0;
}