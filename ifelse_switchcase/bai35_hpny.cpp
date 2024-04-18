#include <iostream>

using namespace std;
int main()
{
	int h, m;
	cin >> h >> m;
	int result = (23 - h) * 60 + (60 - m);
	cout << result;
	return 0;
}
