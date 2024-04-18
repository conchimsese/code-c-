#include <iostream>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	int x, dem = 0, check = 0;
	while(n > 0)
	{
		x = n % 10;
		for(int i = 2; i < x; i++)
		{
			if(x % i == 0)
			{
				check = 1;
				break;
			}
		}
		if(check == 0 && x > 1)
		{
			dem++;
		}
		check = 0;
		n /= 10;
	}
	cout << dem;
	return 0;
}
