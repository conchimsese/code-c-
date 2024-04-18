#include <bits/stdc++.h>
using namespace std;
long long legendre(long long n, int p)
{
	long long x = p;
	long long res = 0;
	long long mod = 1e9 + 7;
	while(x <= n)
	{
		res += n/x;
		x *= p;
		res %= mod;
	}
	return res;
}
int main()
{
	long long n;
	int p;
	cin >> n >> p;
	cout << legendre(n, 5);
	return 0;
}
