#include <bits/stdc++.h>
#define max_length 100
using namespace std;
int main()
{
    int n, k, count = 0, arr[max_length];
    cin >> n >> k;

    for (int i = 0; i < n; ++i) cin >> arr[i];

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {   
			if (i == j) continue;
            if ((arr[i] + arr[j]) % k == 0) count++;
        }
    }
    cout << count;
}