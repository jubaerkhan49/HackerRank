#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n, k;
	int rq, cq;
	cin >> n >> k;
	cin >> rq >> cq;
	int r[100006], c[100006];
	
	// fixing the primary diagonal values
	int lower_diag, upper_diag;
	if (rq >= cq) lower_diag = rq-cq+1;
	else {
		lower_diag = 1;
	}
	if (rq >= cq) upper_diag = n;
	else {
		upper_diag = (n-cq)+rq;
	}
	
	// fixing the secondary diagonal
	int sec_lower_diag, sec_upper_diag;
	if (rq+cq > n) {
		sec_lower_diag = rq-(n-cq);
	}
	else {
		sec_lower_diag = 1;
	}
	if (rq+cq > n) {
		sec_upper_diag = n;
	}
	else {
		sec_upper_diag = n-(rq+cq);
	}
	// fixing up row values
	int lower_row = 1, upper_row = n;
	
	// fixing up col values
	int lower_col = 1, upper_col = n;
	
	
	for (int i = 0; i < k; ++i) {
		cin >> r[i] >> c[i];
		if (c[i] == r[i]+(cq-rq)) {
			// using row values
			if (r[i] > lower_diag && r[i] < rq) lower_diag = r[i]+1;
			if (r[i] < upper_diag && r[i] > rq) upper_diag = r[i]+1;
		}
		if (c[i] == -r[i]+(rq+cq)) {
			// using row values
			if (r[i] > sec_lower_diag && r[i] < rq) sec_lower_diag = r[i]+1;
			if (r[i] < sec_upper_diag && r[i] > rq) sec_upper_diag = r[i]+1;
		}
		if (c[i] == cq) {
			// using row values
			if (r[i] > lower_row && r[i] < rq) lower_row = r[i]+1;
			if (r[i] < upper_row && r[i] > rq) upper_row = r[i]+1;
		}
		if (r[i] == rq) {
			// using col values
			if (c[i] > lower_col && c[i] < cq) lower_col = c[i]+1;
			if (c[i] < upper_col && c[i] > cq) upper_col = c[i]+1;
		}
	}
	int sum = 0;
	//cout << endl;
	sum += (rq-lower_diag);
	//cout << rq-lower_diag << endl;
	sum += (upper_diag-rq);
	//cout << upper_diag-rq << endl;
	sum += (rq-sec_lower_diag);
	//cout << rq-sec_lower_diag << endl;
	sum += (sec_upper_diag-rq);
	//cout << sec_upper_diag-rq << endl;
	sum += (rq-lower_row);
	//cout << rq-lower_row << endl;
	sum += (upper_row-rq);
	//cout << upper_row-rq << endl;
	sum += (cq-lower_col);
	//cout << cq-lower_col << endl;
	sum += (upper_col-cq);
	//cout << upper_col-cq << endl;
	cout << sum << endl;
	return 0;
}