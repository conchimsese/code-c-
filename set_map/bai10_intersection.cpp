#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<long long, int> mp;
	int n, m; cin >> n >> m;
	long long a[n], b[m];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]] = 1;
	}
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
		if(mp[b[i]] == 1) mp[b[i]] = 2;
	}
	for(long long x : a)
	{
		if(mp[x] == 2) 
		{
			cout << x << " ";
			mp[x] = 0;
		}
	}
	return 0;
}
