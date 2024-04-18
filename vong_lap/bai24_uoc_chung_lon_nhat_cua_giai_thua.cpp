#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	long long giaithua = 1;
	for(int i = 2; i <= min(a, b); i++)
	{
		giaithua *= i;
	}
	cout << giaithua;
	return 0;
}
