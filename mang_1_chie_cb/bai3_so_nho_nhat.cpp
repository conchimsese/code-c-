#include <bits/stdc++.h>
using namespace std;

void min(int a[], int n)
{
	int min = a[0];
	int dem = 1;
	for(int i = 1; i < n; i++)
	{
		if(a[i] <= min)
		{
			if(min == a[i]) dem++;
			min = a[i];
		}
	}
	cout << dem;
}
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
	nhapmang(a, n);
	min(a, n);
	return 0;
}
