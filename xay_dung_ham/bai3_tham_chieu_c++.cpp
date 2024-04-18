#include <iostream>

using namespace std;
void solve(int &n)
{
	n *= 28;
}
int main()
{
	int n;
	cin >> n;
	solve(n);
	cout << n;
	return 0;
}
