#include <iostream>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	cout << (n * (2*1 + (n-1)*1)) / 2 << endl;
	cout << (n*(n+1)*(2*n+1))/6 << endl;
	cout << n/3 << endl;
	cout << ((n/3) * (2*3 + (n/3 - 1)*3))/2;
	return 0;
}
