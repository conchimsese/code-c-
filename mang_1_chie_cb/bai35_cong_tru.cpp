#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[1000], b[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n - 1; i++)
	{
		cin >> b[i];
	}
	int sum = a[0];
	for(int i = 1; i < n; i++)
	{
		if(b[i-1] == 1)
		{
			sum += a[i];
		}
		else
		{
			sum -= a[i];
		}
	}
	cout << sum;
	return 0;
}
