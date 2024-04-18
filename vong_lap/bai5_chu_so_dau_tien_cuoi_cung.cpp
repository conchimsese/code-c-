#include <iostream>

using namespace std;
int main()
{
	long long n; 
	cin  >> n;
	int x = n % 10;
	while(n >= 10)
	{
		n /= 10;
	}
	cout << n << " " << x;
	return 0;
}
