#include <bits/stdc++.h>
using namespace std;

int nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int csnt(int n)
{
	if(n == 0) return 0;
	while(n)
	{
		if(n%10 != 2 && n%10 != 3 && n%10 != 5 && n%10 != 7) return 0;
		n /= 10;
	}
	return 1;
}
int tongnt(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return nt(sum);
}
int main()
{
	int a, b;
	cin >> a >> b;
	int dem = 0;
	for(int i = a; i <= b; i++)
	{
		if(csnt(i) && nt(i) && tongnt(i)) dem++;
	}
	cout << dem;
	return 0;
}
