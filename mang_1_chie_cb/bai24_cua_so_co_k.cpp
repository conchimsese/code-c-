#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k; cin >> n >> k;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = k; i <= n; i++)
	{
		int sum = 0;
		for(int j = i - k; j < i; j++)
		{
			sum += a[j];
		}
		cout << sum << " ";
	}
	return 0;
}
