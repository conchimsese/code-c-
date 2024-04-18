#include <iostream>

using namespace std;
int main()
{
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	double temp = b/a;
	if(b * temp == c && c * temp == d)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
