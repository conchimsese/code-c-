#include <iostream>

using namespace std;
int main()
{
	float a;
	cin >> a;
	int n = (int)a*1;
	if(a - (float)n >= 0.5)
	{
		n += 1;
	}
	cout << n;
	return 0;
}
