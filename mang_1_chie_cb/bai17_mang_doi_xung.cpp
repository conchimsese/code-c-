#include <bits/stdc++.h>
using namespace std;

void nhapmang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
bool checkdx(int a[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n-i-1]) return false;
	}
	return true;
}
int main()
{
	int a[1000000];
	int n;
	cin >> n;
	nhapmang(a, n);
	if(checkdx(a, n)) cout << "YES";
	else cout << "NO";
	return 0;
}
