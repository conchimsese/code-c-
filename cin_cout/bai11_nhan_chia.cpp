#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	cout << 2*n << endl << endl;
	cout << 10*n << endl << endl;
	cout << n/2 << endl << endl;
	cout << fixed << setprecision(3) << (double)n/2;
	return 0;
}
