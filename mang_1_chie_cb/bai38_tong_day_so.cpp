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
	for(int i = 0; i < n-1; i++)
	{
		cout << a[i] + a[i+1] << " ";
	}
	cout << endl;
	for(int i = 0; i < n-2; i++)
	{
		cout << a[i] + a[i+1] + a[i+2] << " ";
	}
	cout << endl;
	for(int i = 0; i < n-3; i++)
	{
		cout << a[i] + a[i+1] + a[i+2] + a[i+3] << " ";
	}
	return 0;
}
