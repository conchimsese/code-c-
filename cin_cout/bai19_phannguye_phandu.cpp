#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double x;
	cin >> x;
	cout << (long long)x << endl;
	cout << fixed << setprecision(2) << x-floor(x);
	return 0;
}
