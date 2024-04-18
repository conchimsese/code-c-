#include <iostream>
#include <cmath>
using namespace std;

bool nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return n > 1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(nt(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
