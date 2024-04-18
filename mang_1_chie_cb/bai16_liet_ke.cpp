#include <bits/stdc++.h>
using namespace std;
bool nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return n > 1;
}
bool tn(int n)
{
	int temp = n;
	int sum = 0;
	while(n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if(sum == temp) return 1;
	return 0;
}
bool cp(int n)
{
	int tmp = sqrt(n);
	if(tmp * tmp == n) return 1;
	return 0;
}
bool sumnt(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	if(nt(sum)) return 1;
	return 0;
}
int main()
{
	int n; cin >> n;
	int a[100];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];	
	}
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
	for(int i = 0; i < n; i++)
	{
		if(nt(a[i])) dem1++;
		if(tn(a[i])) dem2++;
		if(cp(a[i])) dem3++;
		if(sumnt(a[i])) dem4++;
	}
	cout << dem1 << "\n" << dem2 << "\n" << dem3 << "\n" << dem4;
	return 0;
}
