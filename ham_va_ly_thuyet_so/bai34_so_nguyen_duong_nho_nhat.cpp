#include <bits/stdc++.h>
using namespace std;

long long bcnn(long long x, long long y)
{
	return x / __gcd(x, y) * y;
}
int dem(long long n)
{
	int dem = 0;
	while(n)
	{
		dem++;
		n /= 10;
	}
	return dem;
}
int main()
{
	long long  x, y, z;
	long long n;
	cin >> x >> y >> z >> n;
	long long a = bcnn(x, bcnn(y, z));
	long long i = a;
	while(dem(a) < n)
	{
		a += i;
	}
	if(dem(a) == n) cout << a;
	else cout << -1;
	return 0;
}
