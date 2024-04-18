#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int sl = n / 28;
	int temp = sl;
	while(sl >= 3)
	{
		int sl1 = (sl / 3);
		temp += sl1;
		sl1 += (sl % 3);
		sl = sl1;
	}
	cout << temp;
	return 0;
}
