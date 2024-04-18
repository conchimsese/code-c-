#include <bits/stdc++.h>
using namespace std;

int uoc(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return i;
	}9
	return n;
}
int main()
{
	int n;
	cin >> n;
	if(n == 1)
	{
		cout << 1;
		return 0;
	}
	for(int i = 1; i <= n; i++)
	{
		cout << uoc(i) << endl;
	}
	return 0;
}
