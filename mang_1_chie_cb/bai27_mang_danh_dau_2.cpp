#include <bits/stdc++.h>
using namespace std;
long long cnt[1000000];
int main()
{
	long long a[1000];
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
	}
	for(int i = 0; i < 1000000; i++)
	{
		if(cnt[i] != 0)
		{
			cout << i << " " << cnt[i] << endl;
		}
	}
	if(cnt[1000000]) cout << 1000000 << " " << cnt[1000000];
return 0;
}
