#include <iostream>

using namespace std;
int main()
{
	long long a, b;
	cin >> a >> b;
	if(a % b == 0)
	{
		cout << a << endl << a;
	}
	else
	{
		long long kq1 = a / b * b;
		long long kq2 = a / b * b + b;
		cout << kq1 << endl << kq2;
	}
	return 0;
}
