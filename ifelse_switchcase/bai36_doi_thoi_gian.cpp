#include <iostream>

using namespace std;
int main()
{
	long long h, m, s;
	cin >> s;
	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	cout << h << "h : " << m << "m : " << s << "s";
	return 0;
}
