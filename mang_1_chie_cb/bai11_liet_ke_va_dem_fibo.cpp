#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n;
	ll a[1000000];
	cin >> n;
	ll fibo[1000];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	
	int check = 0;
	for(ll i = 0; i < n; i++)
	{
		cin >> a[i];
		for(int j = 0; j <= 92; j++)
		{
			if(a[i] == fibo[j])
			{
				check = 1;
				cout << a[i] << " ";
			}
		}
	}
	if(check == 0) cout <<"NONE";
	return 0;
}
