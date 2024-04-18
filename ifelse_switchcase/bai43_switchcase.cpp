#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double a, b;
	char x;
	cin >> a >> b >> x;
	switch (x)
	{
		case '+':
			cout << a << " " << x << " " << b << " = " << a+b;
			break;
		case '-':
			cout << a << " " << x << " " << b << " = " << a-b; 
			break;
		case '*':
			cout << a << " " << x << " " << b << " = " << a*b;
			break;
		case '/':
			cout << a << " " << x << " " << b << " = " << fixed << setprecision(2) << a/b;
			break;
		case '%':
			cout << a << " " << x << " " << b << " = " << (int)a % (int)b;
	}
	return 0;
}
