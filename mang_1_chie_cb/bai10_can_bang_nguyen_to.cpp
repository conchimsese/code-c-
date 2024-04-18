#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
bool nt(int n)
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
	cin >> n;
	nhapmang(a, n);
	for(int i = 0; i < n; i++)
	{
		int left = 0, right = 0;
		for(int j = 0; j < i; j++)
		{
			left += a[j];
		}
		for(int j = i + 1; j < n; j++)
		{
			right += a[j];
		}
		if(nt(left) && nt(right)) cout << i << " ";
	}
	return 0;
}
