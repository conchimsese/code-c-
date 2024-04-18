#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n, year, week, day;
	cin >> n;
	year = n/365;
	cout << year << " ";
	n = n - 365 * year;
	week = n/7;
	cout << week << " ";
	day = n - 7 * week;
	cout << day;
	return 0;
}
