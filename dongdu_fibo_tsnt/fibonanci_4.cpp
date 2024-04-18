#include <bits/stdc++.h>
using namespace std;

bool nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return n > 1;
}
int sum(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool  checkfibo(long long fibo[], int n)
{
	int tong = sum(n);
	for(int i = 0; i <= 92; i++)
	{
		if(fibo[i] == tong) return true;
	}
	return false;
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
	int n; cin >> n;
	for(int i = 2; i < n; i++)
	{
		if(nt(i) && checkfibo(fibo, i)) cout << i << " ";
	}
	return 0;
}
