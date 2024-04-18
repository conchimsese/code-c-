#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long f[1000005];
	long long a[1000005];
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	f[0] = a[0];
	for(int i = 1; i < n; i++)
	{
		f[i] = a[i] + f[i-1];
	}
	int q; cin >> q;
	while(q--)
	{
		int l, r; cin >> l >> r;
		if(l-1 == 0) cout << f[r-1] << endl;
		else cout << f[r-1] - f[l-2] << endl;
	}
	return 0;
}
