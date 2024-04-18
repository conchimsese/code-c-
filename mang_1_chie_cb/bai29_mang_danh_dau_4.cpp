#include <bits/stdc++.h>
using namespace std;
int cnt[1000000];
void check(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
	}
	int max = 0, max1 = 0;
	for(int i = 0; i < 1000001; i++)
	{
		
		if(cnt[i])
		{
			if(cnt[i] > max)
			{
				max = cnt[i];
				max1 = i;
			}
		}
	}
	cout << max1 << " " << max;
}
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	check(a, n);
	return 0;
}
