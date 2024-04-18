#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
	int n;
	cin >> n;
	long long ft = 1;
	long long fs = 1;
	long long f = 1;
	for(int i = 3; i <= n; i++)
	{
		f = 2 * (fs % mod) + 3 * (ft % mod);
		f %= mod;
		ft = fs;
		fs = f;
		
	}
	cout << f;
	return 0;
}
