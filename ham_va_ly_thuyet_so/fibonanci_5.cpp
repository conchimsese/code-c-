#include <bits/stdc++.h>
using namespace std;

bool checkfibo(int n)
{
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i-2] + fibo[i-1];
		if(n == fibo[i]) return true;
	}
	return false;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		if(checkfibo(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
