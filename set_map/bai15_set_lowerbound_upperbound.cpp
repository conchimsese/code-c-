#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	multiset<int> se;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		se.insert(x);
	}
	int t; cin >> t;
	while(t--)
	{
		int tt, x; cin >> tt >> x;
		if(tt == 1) se.insert(x);
		else if(tt == 2)
		{
			multiset<int>::iterator it = se.find(x);
			if(it != se.end()) se.erase(it);
		}
		else if(tt == 3) 
		{
			if(se.lower_bound(x) == se.end()) cout << -1 << endl;
			else cout << *se.lower_bound(x) << endl;
		}
		else if(tt == 4)
		{
			multiset<int>::iterator it = se.upper_bound(x);
			if(it == se.begin()) cout << -1 << endl;
			else
			{
				it--;
				cout << *it << endl;
			}
		}
	}
	return 0;
}
