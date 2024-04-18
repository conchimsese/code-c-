#include <iostream>

using namespace std;
int main()
{
	long long n, a, b;
	cin >> n >> a >> b;
	if(a*n < b*(n/2))
	{
		cout << n*a;
	}
	else
	{
		if(n % 2 == 0)
		{
			cout << n/2*b;
		}
		else
		{
			cout << a + (n-1)/2*b;
		}
	}
	return 0;
}



