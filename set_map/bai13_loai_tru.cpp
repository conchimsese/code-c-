#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	map<int, int> mp;
	while(n--)
	{
		int x; cin >> x;
		mp[x] = 1;
	}
	while(m--)
	{
		int x; cin >> x;
		if(mp[x] == 1) mp[x] = 2;
	}
	for(auto x : mp) 
	{
		if(x.second == 1) cout << x.first << " ";
	}
	return 0;
}
