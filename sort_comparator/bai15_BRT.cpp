#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin >> n;
	long long a[10000005];
	for(long long i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	int min = INT_MAX;
	for(long long i = 1; i < n; i++)
	{
		if(min > abs(a[i] - a[i-1]))
		{
			min = abs(a[i] - a[i-1]);
		}
	}
	long long dem = 1;
	for(long long i = 1; i < n; i++)
	{
		if(abs(a[i] - a[i-1]) == min)
		{
			dem++;
		}
	}
	cout << min << " " << dem;
	return 0;
}
