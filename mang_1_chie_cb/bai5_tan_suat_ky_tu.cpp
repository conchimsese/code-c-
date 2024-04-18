#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	map<char, int> mp;
	while(n--)
	{
		char x; cin >> x;
		int check = 0;
		for(pair<char, int> it : mp)
		{
			if(x == it.first)
			{
				mp[it.first]++;
				check = 1;
			}
		}
		if(check == 0)
		{
			mp.insert({x, 1});
		}
	}
	cout << (*mp.begin()).first << " " << (*mp.begin()).second << endl << endl;
	cout << (*mp.rbegin()).first << " " << (*mp.rbegin()).second << endl << endl;
	for(pair<char, int> it : mp)
	{
		cout << it.first << " " << it.second << endl;
	}
	cout << endl;
	for(auto it = mp.rbegin(); it != mp.rend(); ++it)
	{
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}
