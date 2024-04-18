#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin  >> t;
	long long mod = 1e9 + 7;
	long long res = 1;
	while(t--)
	{
		long long p, e;
		cin >> p >> e;
		res *= (e + 1);
		res %= mod;
	}
	cout << res;
	return 0;
}
