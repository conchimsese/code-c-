#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int min = INT_MAX;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(abs(a[i] - a[j]) < min)
			{
				min = abs(a[i] - a[j]);
			}
		}
	}
	cout << min;
	return 0;
}
