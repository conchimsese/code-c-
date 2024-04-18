#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[1000];
	int max = 0, min = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	cout << min << endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == min)
		{
			cout << i << " ";
		}
	}
	cout << endl;
	cout << max << endl;
	for(int i = n-1; i >= 0; i--)
	{
		if(a[i] == max) cout << i << " ";
	}
	return 0;
}
