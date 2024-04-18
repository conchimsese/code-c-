#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	set<int> a, b;
	map<int, int> mp;
	while(n--)
	{
		int x; cin >> x;
		a.insert(x);
	}
	while(m--)
	{
		int x; cin >> x;
		b.insert(x);
	}
	for(auto it = a.begin(); it != a.end(); it++)
	{
		mp[*it]++;
	}
	for(auto it = b.begin(); it != b.end(); it++)
	{
		mp[*it]++;
	}
	for(auto x : mp)
	{
		if(x.second == 1) cout << x.first << " ";
	}
	return 0;
}
