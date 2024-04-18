#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long res = 1, mod = 1e9 + 7;
	while(n--)
	{
		long long x;
		cin >> x;
		res *= x % mod;
		res %= mod;
	}
	cout << res;
	return 0;
}
