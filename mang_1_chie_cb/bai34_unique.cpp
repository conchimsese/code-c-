#include <bits/stdc++.h>
using namespace std;
void xoa(int a[], int &n, int k)
{
	for(int i = k; i < n; i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
void phantich(int a[], int &n)
{
	for(int i = 1; i < n; i++)
	{
		if(a[i] == a[i-1])
		{
			xoa(a, n, i);
			i--;
		}
	}
}
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	phantich(a, n);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
