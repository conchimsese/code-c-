#include <bits/stdc++.h>
using namespace std;
void xoaytrai(int a[], int n, int k)
{
	for(int l = 0; l < k; l++)
	{
		int tmp = a[0];
		for(int i = 1; i < n; i++)
		{
			a[i - 1] = a[i];
		}
		a[n-1] = tmp;
	}
}
int main()
{
	int n, k; cin >> n >> k;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	xoaytrai(a, n, k);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
