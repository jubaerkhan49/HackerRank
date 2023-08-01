#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(int [], int [],int n, int m, int b);

int main()
{
	int b, n, m;
	cin >> b >> n >> m;
	
	int *keyboard, *usb_drive;
	keyboard  = new int [n];
	usb_drive = new int [m];
	
	for (int i = 0; i < n; ++i) cin >> keyboard[i];
	for (int i = 0; i < m; ++i) cin >> usb_drive[i];
	
	int res = getMoneySpent(keyboard, usb_drive, n, m, b);
	
	cout << res << endl;
}

int getMoneySpent(int keyboard[], int usb_drive[],int n, int m, int b)
{
	int sum = 0;
	bool ok = false;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			bool a = (keyboard[i] + usb_drive[j]) <= b);
			bool b = (sum <= (keyboard[i] + usb_drive[j]);
			
			if (a && b) sum = keyboard[i] + usb_drive[j];
		}
	}
	
	return sum ? sum : -1;
}