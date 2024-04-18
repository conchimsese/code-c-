#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	int max = n / pow(10, (int)log10(n));
	while(n >= 10)
	{
		if(n % 10 > max)
		{
			cout << "NO";
			return 0;
		}
		n /= 10;
	}
	cout << "YES";
	return 0;
}
