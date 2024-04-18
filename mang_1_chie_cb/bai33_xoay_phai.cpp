#include <bits/stdc++.h>
using namespace std;
void xoay_phai(int a[], int n, int k)
{
	for(int l = 0; l < k; l++)
	{
		int tmp = a[n-1];
		for(int i = n-2; i >= 0; i--)
		{
			a[i+1] = a[i];
		}
		a[0] = tmp;
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
	xoay_phai(a, n, k);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
