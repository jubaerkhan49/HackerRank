#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int super_digit(ll sum);
int digit_sum(ll n);
int main()
{
	char tmp;
	ll sum = 0, k;
	while (scanf("%c", &tmp) && tmp != ' ') {
		sum += (tmp-'0');
	}
	scanf("%lld", &k);
	sum *= k;
	
	printf("%d\n", super_digit(sum));
	
	return 0;
}
int super_digit(ll sum) {
	if (!(sum/10)) return sum;
	return super_digit(digit_sum(sum));
}
int digit_sum(ll n) {
	if (n == 0) return n;
	return n%10+digit_sum(n/10);
}