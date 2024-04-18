#include <bits/stdc++.h>
using namespace std;
int cnt[1001];
void lietke(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
	}
	for(int i = 0; i < n; i++)
	{
		if(cnt[a[i]])
		{
			cout << a[i] << " " << cnt[a[i]] << endl;
		}
	}
}
void lietke2()
{
	for(int i = 0; i < 1001; i++)
	{
		if(cnt[i])
		{
			cout << i << " " << cnt[i] << endl;
		}
	}
}
void max()
{
	int max_tx = INT_MIN, max_gt = INT_MIN;
	for(int i = 1000; i >= 0; i--)
	{
		if(cnt[i] > max_tx)
		{
			max_tx = cnt[i];
			max_gt = i;
		}
	}
	cout << max_gt << endl;
}
void min()
{
	int min_tx = INT_MAX, min_gt = INT_MAX;
	for(int i = 0; i < 10001; i++)
	{
		if(cnt[i] < min_tx && cnt[i] != 0)
		{
			min_tx = cnt[i];
			min_gt = i;
		}
	}
	cout << min_gt << endl;
}
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	lietke(a, n);
	cout << endl;
	lietke2();
	cout << endl;
	max();
	min();
	return 0;
}
