#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long fibo[100];
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 92; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	long long n;
	cin >> n;
	int check = 0;
	for(int i = 0; i <= 92; i++)
	{
		if(n == fibo[i])
		{
			cout << "YES";
			check = 1;
			break;
		}
	}
	if(check == 0) cout << "NO";
	return 0;
}
