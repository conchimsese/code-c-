#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long fibo[100];
	int n;
	cin >> n;
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for(int i = 1; i <= n; i++)
	{
		cout << fibo[i] << endl;
	}
	return 0;
}
