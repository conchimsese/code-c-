#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	multiset<int> se;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		se.insert(x);
	}
	int q; cin >> q;
	while(q--)
	{
		int tt; cin >> tt;
		switch(tt)
		{
			case 1:
				int x; cin >> x;
				se.insert(x);
				break;
			case 2:
				int y; cin >> y;
				se.erase(y);
				break;
			case 3:
				cout << *se.begin() << endl;
				break;
			case 4:
				cout << *se.rbegin() << endl;
		}
	}
	return 0;
}
