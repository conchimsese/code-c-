#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	while(b)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int n; cin >> n;
	int a[1000000];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int temp = gcd(a[0], a[1]);
	for(int i = 2; i < n; i++)
	{
		temp = gcd(temp, a[i]);
	}
	cout << temp;
	return 0;
}
