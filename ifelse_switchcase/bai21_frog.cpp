#include <iostream>

using namespace std;
int main()
{
	long long a, b, k;
	cin >> a >> b >> k;
	if(k % 2 == 0)
	{
		if(a != b)
		{
			cout << (a-b) * k/2;
		}
		else
		{
			cout << "0";
		}
	}
	else 
	{
		cout << (a * (k/2 + 1)) - b * (k/2);
		
	}
	return 0;
}
