#include <bits/stdc++.h>
using namespace std;
int PatterMatch(char* s, char* k);
int Search_pat(char *pat, char *txt);
int main()
{	
	int t, n, m, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		char s[15][15], pat[15][15];
		getchar();
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}
		cin >> x >> y;
		getchar();
		for (int i = 0; i < x; ++i) {
			cin >> pat[i];
		}
		int a = 0, b = 0, cnt = 0;
		int a1 = a, b1 = b;
		while (a < n && (n-a >= x)) {
			while (a1 < n && b1 < x) {
				int k = PatterMatch(s[a1], pat[b1]);
				if (k != -1) {
					a1++, b1++;
					continue;
				}
				else {
					break;
				}
			}
			if (b1 == x) {
				int k = PatterMatch(s[a], pat[b]);
				cnt++;
				//s[a][k-1] = '#';
				int l = strlen(pat[b]);
				for (int i = k-1; i < l; ++i) {
					s[a][i] = '#';
				}
				a1 = a;
				b1 = 0;
			}
			else {
				a++;
				a1 = a;
				b1 = 0;
			}
		}
		cout << cnt << endl;	
	}
	return 0;
}

int PatterMatch(char* s, char* k) {
	int p1 = 0, p2 = 0;
	while (*(s+p1) != '\0' && *(k+p2) != '\0') {
		if (*(s+p1) == *(k+p2)) {
			p1++, p2++;
		}
		else {
			p1++, p2 = 0;
		}
	}
	if (strlen(k) == (size_t)p2) return p1-p2+1;
	return -1;
}


int Search_pat(char *txt, char *pat)
{
    int M = strlen(pat);
    int N = strlen(txt);
    
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
        {
            if (txt[i+j] != pat[j])
                break;
        }
        if (j == M)
        {
        	//cout << i+1 << endl;
        	return i+1;
        }
    }
    return -1;
}