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
	cout << a[0] << " ";
	for(int i = 1; i < n; i++)
	{
		a[i] = a[i] + a[i-1];
		cout << a[i] << " ";
	}
	return 0;
}
