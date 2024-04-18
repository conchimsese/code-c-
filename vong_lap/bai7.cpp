#include <iostream>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	int max = n % 10;
	while(n >= 1)
	{
		if(n % 10 > max)
		{
			max = n % 10;
		}
		n /= 10;
	}
	cout << max;
	return 0;
}
