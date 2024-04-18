#include <iostream>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	int number_start, number_end;
	if(n <= 9)
	{
		cout << n << " " << n;
	}
	else
	{
		number_end = n % 10;
		while(n >= 10)
		{
			n /= 10;
		}
		number_start = n;
		cout << number_start << " " << number_end;
	}
	return 0;
}
