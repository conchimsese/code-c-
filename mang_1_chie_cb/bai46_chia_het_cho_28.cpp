#include <bits/stdc++.h>
using namespace std;
int cnt[28];
int main()
{
	int n; cin >> n;
	int a[1000000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	long long res = 0;
	for(int i = 0; i < n; i++)
	{
		int x = a[i] % 28;
		int y = (28 - x) % 28;
		res += cnt[y];
		cnt[x]++;
	}
	cout << res;
	return 0;
}
