#include <bits/stdc++.h>
using namespace std;


int main()
{
	long long n, mod = 1e9 + 7, sum = 0;
	cin >> n;
	while(n--)
	{
		long long x;
		cin >> x;
		sum = (sum + x) % mod;
	}
	cout << sum;
	return 0;
}
