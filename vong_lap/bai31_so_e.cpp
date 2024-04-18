#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int n;
	cin >> n;
	double thuong = 1;
	for(int i = 1; i <= n-1; i++)
	{
		double result = 1;
		for(int j = 1; j <= i; j++)
		{
			result *= j;
		}
		thuong += 1/(double)result;
	}
	cout << fixed << setprecision(2) << thuong;
	return 0;
}
