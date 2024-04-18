#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long long x, y;
	char c;
	float f;
	double d;
	cin >> x >> y >> c >> f >> d;
	cout << x << endl;
	cout << y << endl;
	cout << c << endl;
	cout << fixed << setprecision(2) << f << endl;
	cout << fixed << setprecision(9) << d;
	return 0;
}
