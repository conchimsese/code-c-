#include <iostream>

using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << 128 * a + 97 * b + 1000;
	return 0;
}
