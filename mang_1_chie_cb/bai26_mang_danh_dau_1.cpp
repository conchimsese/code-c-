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
		cnt[a[i]] = 1;
	}
	int dem = 0;
	for(long long i = 0; i < 1000001; i++)
	{
		if(cnt[i] == 1)
		{
			dem++;
		}
	}
	cout << dem;
	return 0;
}
