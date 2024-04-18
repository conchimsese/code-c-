#include <bits/stdc++.h>
using namespace std;

long long timso(long long fibo[], long long n)
{
	for(int i = 0; i <= 92; i++)
	{
		if(fibo[i] >= n) return fibo[i];
	}
}
int main()
{
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	long long n; cin >> n;
	cout << timso(fibo, n);
	return 0;
}
