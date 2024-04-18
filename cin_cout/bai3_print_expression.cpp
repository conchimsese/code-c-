#include <iostream>
using namespace std;

int main()
{
	long long x, y, z, t, tong, bieuthuc;
	cin >> x >> y >> z >> t;
	cout << y << "," << z << "," << x << "," << t << endl;
	tong = x + y + z + t;
	bieuthuc = x - y + z * t;
	cout << tong << endl;
	cout << bieuthuc;
	return 0;
}
