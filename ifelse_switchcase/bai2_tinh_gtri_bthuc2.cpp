#include <iostream>

using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b >> c;
	long long s = a*(b+c)+b*(a+c);
	cout << s;
	return 0;
}
