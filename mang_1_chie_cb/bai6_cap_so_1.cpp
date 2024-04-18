#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	int a[1000];
	int n; cin >> n;
	nhapmang(a, n);
	int k; cin >> k;
	int dem = 0;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] + a[j] == k) dem++;
		}
	}
	cout << dem;
	return 0;
}
