#include <bits/stdc++.h>
using namespace std;
void phantich(int a[], int b[], int &n, int m, int p)
{
	int tmp = n;
	n = n + m;
	for(int i = tmp; i >= p; i--)
	{
		a[i + m] = a[i];
	}
	
	for(int i = 0; i < m; i++)
	{
		a[p + i] = b[i];
	}
}
int main()
{
	int n, m, p; cin >> n >> m >> p;
	int a[1000], b[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	phantich(a, b, n, m, p);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
