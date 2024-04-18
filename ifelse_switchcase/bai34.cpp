#include <iostream>

using namespace std;
int main()
{
	long long c1, c2, c3, c4, c5;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	long long tong = c1 + c2 + c3 + c4 + c5;
	if(tong % 5 == 0 && tong / 5 != 0)
	{
		cout << tong / 5;
	}
	else
	{
		cout << "-1";
	}
	return 0;
}
