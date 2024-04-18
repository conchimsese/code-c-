#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	set<int> se;
	int sl = n + m;
	while(sl--)
	{
		int x; cin >> x;
		se.insert(x);
	}
	for(set<int>::reverse_iterator it = se.rbegin(); it != se.rend(); it++)
	{
		cout << *it << " ";
	}
	return 0;
}
