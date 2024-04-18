#include <bits/stdc++.h>
using namespace std;
int cnt[1000000];
int main()
{
	int a[1000];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++)
	{
		if(cnt[a[i]])
		{
			cout << a[i] << " " << cnt[a[i]] << endl;
		cnt[a[i]] = 0;
		}
	}
	return 0;
}
