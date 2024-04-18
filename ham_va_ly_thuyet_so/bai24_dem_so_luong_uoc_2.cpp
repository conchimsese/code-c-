#include <bits/stdc++.h>
using namespace std;
int dem(long long n)
{
	int dem = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			dem++;
			if(i != n/i) dem++;
		}
	}
	return dem;
}
int main()
{
	long long n;
	cin >> n;
	cout << dem(n);
	return 0;
}
