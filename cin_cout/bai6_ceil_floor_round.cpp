#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
	double x;
	cin >> x;
	cout << fixed << setprecision(0) << ceil(x) << endl;
	cout << fixed << setprecision(0) << floor(x) << endl;
	cout << fixed << setprecision(0) << round(x);
	return 0;
}
