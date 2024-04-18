#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
	long long f[1000005];
	f[0] = 0;
	f[1] = 0;
	f[2] = 1;
	for(int i = 3; i < 1000005; i++)
	{
		f[i] = f[i-1] + f[i-2] + f[i-3];
		f[i] %= mod;
	}
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << f[n] << endl;
	}
	return 0;
}
