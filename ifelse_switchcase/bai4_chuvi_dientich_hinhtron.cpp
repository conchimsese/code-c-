#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double r;
	cin >> r;
	cout << fixed << setprecision(4) << 2*3.14*r << " " << fixed << setprecision(4) << r*r*3.14;
	return 0;
}
