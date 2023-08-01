#include <bits/stdc++.h>
using namespace std;
vector <int> rept, dist;
int color_count(int k)
{
    int count {0};
    for (int i = 0; i < rept.size(); ++i)
    {
        if (rept.at(i) == k)
        {
            count++;
        }
    }
    return (count / 2);
}

int main()
{
    int m, n, t;
    bool exist = false;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        rept.push_back(t);
    }
    dist.push_back(rept.at(0));

    for (int i = 1; i < n; ++i)
    {
        exist = false;
        for (int j = 0; j < dist.size(); ++j)
        {
            if (rept.at(i) == dist.at(j))
            {
                exist = true;
                break;
            }
        }
        if (exist == false)
        {
            dist.push_back(rept.at(i));
        }
    }

    int sum {0};
    for (int i = 0; i < dist.size(); ++i)
    {
        sum += color_count(dist.at(i));
    }
    
    cout << sum << endl;
    return 0;
}