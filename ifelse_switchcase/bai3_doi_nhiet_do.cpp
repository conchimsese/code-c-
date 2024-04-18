#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long long c;
	cin >> c;
	double f = ((double)c * 9 / 5) + 32;
	cout << fixed << setprecision(2) << f;
	return 0;
}
