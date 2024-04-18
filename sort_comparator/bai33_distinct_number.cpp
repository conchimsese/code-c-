#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[1000000];
	for(int  i= 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	long long dem = 1, x = a[0];
	for(int i = 1; i < n; i++)
	{
		if(a[i] != x)
		{
			x = a[i];
			dem++;
		}
	}
	cout << dem;
	return 0;
}
