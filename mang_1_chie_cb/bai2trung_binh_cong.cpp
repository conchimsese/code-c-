#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
int nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return n > 1;
}
int main()
{
	int a[1000];
	int n;
	int avg = 0, dem = 0;
	cin >> n;
	nhapmang(a, n);
	for(int i = 0; i < n; i++)
	{
		if(nt(a[i]))
		{
			avg += a[i];
			dem++;
		}
	}
	cout << fixed << setprecision(3) << (double)avg / dem;
	return 0;
}
