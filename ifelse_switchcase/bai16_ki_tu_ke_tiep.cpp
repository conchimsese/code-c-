#include <iostream>

using namespace std;
int main()
{
	char x;
	cin >> x;
	if(x == 'Z' || x == 'z')
	{
		cout << "a";
	}
	else if(x > 96)
	{
		x += 1;
		cout << x;
	}
	else
	{
		x += 33;
		cout << x;
	}
	return 0;
}
