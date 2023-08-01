#include <iostream>
using namespace std;
bool kangaroo(int a, int b, int c, int d)
{
	double x, y;
	x = a - c ;
	y = d - b ;
	if (x == 0)
	{
		return false;
	}
	double z = x / y ;
	return ((z > 0) && (z - (int)z == 0) ? true : false);
}

int main()
{
    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    bool jumped = kangaroo(x1, v1, x2, v2);

    jumped ? cout << "YES" : cout << "NO" << endl;
    return 0;
}