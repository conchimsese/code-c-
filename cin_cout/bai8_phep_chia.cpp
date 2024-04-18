#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long long a, b;
	cin >> b >> a;
	int kq1 = a/b;
	double kq2 = (double)a/b;
	cout << kq1 << endl;
	cout << fixed << setprecision(2) << kq2;
	return 0;
}
