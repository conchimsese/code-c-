#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n; cin >> n;
	if(n == 0)
	{
		cout << 1;
		return 0;
	}
	switch(n%4)
	{
		case 1:
			cout << 8;
			break;
		case 2:
			cout << 4;
			break;
		case 3:
			cout << 2;
			break;
		case 0:
			cout << 6;
			break;
	}
	return 0;
}
