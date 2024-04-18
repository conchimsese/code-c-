#include <iostream>
#define ll long long

using namespace std;
void displayNumber(ll x, ll y, ll z)
{
	cout << y << " " << x << " " << z << endl;
	cout << x + y + z << endl;
	cout <<"KET THUC !"; 
}
int main()
{
	ll a, b, c;
	cin >> a >> b >> c;
	displayNumber(a, b, c);
	return 0;
}
