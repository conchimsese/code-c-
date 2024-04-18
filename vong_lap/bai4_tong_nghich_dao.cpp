#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	int n;
	double tong = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		tong += 1/(double)i;
	}
	cout << fixed << setprecision(3) << tong;
	return 0;
}
