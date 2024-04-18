#include <iostream>

using namespace std;
int main()
{
	char n;
	cin >> n;
	if(n >= 65 && n <= 90)
	{
		n += 32;
		cout << n;
	}
	else if(n >= 97 && n <= 122)
	{
		n -= 32;
		cout << n;
	}
	else 
	{
		cout << n;
	}
	return 0;
}
