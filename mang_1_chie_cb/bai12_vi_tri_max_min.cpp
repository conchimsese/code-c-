#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin >> n;
	int a[1000000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int min = a[n-1], max = a[0], max_index = 0, min_index = n-1;
	for(int i = 1; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			max_index = i;
		}
	}
	for(int i = n-2; i >= 0; i--)
	{
		if(a[i] < min)
		{
			min = a[i];
			min_index = i;
		}
	}
	cout << min_index << " " << max_index;	
	return 0;
}
