#include <iostream>

using namespace std;
int main()
{
	long long n, s;
	cin >> n >> s;
	if(n >= s)
	{
		cout << "1";
	}
	else
	{
		if(s % n == 0)
		{
			cout << s/n;
		}
		else 
		{
			cout << s/n + 1;
		}
	}
	return 0;
}
