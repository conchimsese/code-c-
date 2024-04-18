#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n , tong = 0;
	cin >> n;
	for(long long i = 1; i <= n; i++)
	{
		tong += pow(-1, i) * i;
	}
	cout << tong;
	return 0;
}
