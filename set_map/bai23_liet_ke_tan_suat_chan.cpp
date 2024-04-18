#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[1000000];
	map<int, int> mp;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	for(pair<int, int> it : mp)
	{
		cout << it.first << " " << it.second << endl;
	}
	auto it = mp.rbegin();
	while(it != mp.rend())
	{
		cout << (*it).first << " " << (*it).second;
		it++;
	}
	return 0;
}
