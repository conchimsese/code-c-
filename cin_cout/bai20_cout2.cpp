#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	cout << setw(6) << setfill('0') << n << endl;
	cout << setw(6) << setfill('#') << n;
	return 0;
}




