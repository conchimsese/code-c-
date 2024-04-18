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
	int st = 0, nd = 0;
	int tmp = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > st)
		{
			st = a[i];
			tmp = i;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(i != tmp)
		{
			if(a[i] > nd) nd = a[i];
		}
	}
	cout << st << " " << nd;
	return 0;
}
