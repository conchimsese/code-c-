#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n, u1, d;
	cin >> n >> u1 >> d;
	double s = n*u1 + ((n*(n-1))/2)*d;
	cout << fixed << setprecision(0) << s;
	return 0;
}
