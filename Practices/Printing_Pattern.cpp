#include <stdio.h>
int main()
{
	int n;
	scanf("%n", &n);
	
	int k = n * 2 - 1;
	
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			printf('&');
		}
		printf('\n');
	}
}