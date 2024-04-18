#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<pair<int, int>> se;
	int n; cin >> n;
	while(n--)
	{
		int x, y; cin >> x >> y;
		se.insert({x, y});
	}
	cout << se.size();
	return 0;
}
