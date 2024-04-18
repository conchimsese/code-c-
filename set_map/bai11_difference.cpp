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
	for(auto it = b.begin(); it != b.end(); it++)
	{
		mp.insert(make_pair(*it, 1));
	}
	for(auto it = a.begin(); it != a.end(); it++)
	{
		if(mp[*it] != 1)
		{
			cout << *it << " ";
		}
	}
	return 0;
}
