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
bool socuoi(int n)
{
	int max = n % 10;
	n /= 10;
	while(n)
	{
		if(max < n % 10) return 0;
		n /= 10;
	}
	return 1;
}
int main()
{
	int n; cin >> n;
	int dem = 0;
	for(int i = 2; i <= n; i++)
	{
		if(socuoi(i) && nt(i)) 
		{
			cout << i << " ";
			dem++;
		}
	}
	cout << "\n" << dem;
	return 0;
}
