#include <bits/stdc++.h>
using namespace std;
int cnt[10000000];
int main()
{
	int n; cin >> n;
	long long a[1000000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]] = 1;
	}
	int t; cin >> t;
	while(t--)
	{
		long long x; cin >> x;
		if(cnt[x]) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
