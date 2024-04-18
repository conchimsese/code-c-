#include <bits/stdc++.h>
using namespace std;
int dem(int n)
{
	if(n == 0) return 1;
	int dem = 0;
	while(n)
	{
		int tmp = n % 10;
		if(tmp == 0 || tmp == 6 || tmp == 8)
		{
			dem++;
		}
	}
	if(n == 0) return dem+1;
	return dem;
}
bool cmp(int x, int y)
{
	return dem(x) > dem(y);
}
int main()
{
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n, cmp);
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
