#include <bits/stdc++.h>
using namespace std;
long long legendre(long long n, int p)
{
	long long x = p;
	long long res = 0;
	while(x <= n)
	{
		res += n/x;
		x *= p;
	}
	return res;
}
int main()
{
	long long n;
	int p;
	cin >> n >> p;
	cout << legendre(n, p);
	return 0;
}
