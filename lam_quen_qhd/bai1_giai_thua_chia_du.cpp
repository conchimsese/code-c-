#include <bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
	long long f[1000005];
	f[0] = 1;
	for(int i = 1; i < 1000005; i++)
	{
		f[i] = (i * f[i-1]) % mod;
	}
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << f[n] << endl;
	} 
	return 0;
}
