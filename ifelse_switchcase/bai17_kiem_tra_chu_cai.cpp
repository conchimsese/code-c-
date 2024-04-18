#include <iostream>

using namespace std;
int main()
{
	char n;
	cin >> n;
	if(n >= 65 && n <= 90)
	{
		cout << "UPPER";
	}
	else if(n >= 97 && n <= 122)
	{
		cout << "LOWER";
	}
	else if(n >= 48 && n <= 57)
	{
		cout << "DIGIT";
	}
	else
	{
		cout << "SPECIAL";
	}
	return 0;
}
