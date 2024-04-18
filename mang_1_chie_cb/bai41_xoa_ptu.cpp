#include <bits/stdc++.h>
using namespace std;
void xoa(int a[], int &n, int k)
{
	for(int i = k; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
int main()
{
	int n; cin >> n;
	int a[1000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] == 28)
		{
	
			xoa(a, n, i);
			i--;
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	if(n == 0)
	{
		cout << "EMPTY";
	}
	return 0;
}
