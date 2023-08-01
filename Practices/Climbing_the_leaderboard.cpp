#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n, m, temp;
    int *score, *alice;
    cin >> n;
    score = new int [n];

    cin >> score[0];

    for (i = 1, k = 1; i < n; i++)
    {
        cin >> temp;
        if (score[k-1] != temp)
        {
            score[k] = temp;
            k++;
        }
    }

    cin >> m;
    alice = new int [m];
    for (i = 0; i < m; i++)
    {
        cin >> alice[i];
    }

    i = k - 1;
    j = 0;
    while (i >= 0 && j < m)
    {
        if (score[i] > alice[j])
        {
            cout << i + 2 << endl;
            j++;
        }
        else if (score[i] == alice[j])
        {
            cout << i + 1 << endl;
            j++;
        }
        else
        {
            if (i == 0)
            {
                cout << i + 1 << endl;
                j++;
                continue;
            }
            i--;
        }  
    }
    delete [] score;
    delete [] alice;
    return 0;
}