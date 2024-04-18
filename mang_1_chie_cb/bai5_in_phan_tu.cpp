#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int main()
{
	int a[1000];
	int n;
	cin >> n;
	int check = 0;
	nhapmang(a, n);
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0 && a[i] % 2 == 0)
		{
			check = 1;
			cout << a[i] << " ";
		}
	}
	if(!check) cout << "NONE";
	return 0;
}
