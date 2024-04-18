#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	double cb2 = sqrt(n);
	double cb3 = cbrt(n);
	cout << fixed << setprecision(2) << cb2 << endl;
	cout << fixed << setprecision(3) << cb3;
	return 0;
}
