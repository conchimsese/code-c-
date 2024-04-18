#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int q; cin >> q;
	while(q--)
	{
		int x; cin >> x;
		auto it = lower_bound(a, a+n, x);
		if(it != a+n && *it == x) cout << "Yes" << " " << distance(a+0, it) + 1 << endl;
		else cout << "No" << " " << distance(a+0, it) + 1 << endl;
	}
	return 0;
}
