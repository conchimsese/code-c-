#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	long long n;
	cin >> n;
	n = abs(n);
	int demle = 0, demchan = 0;
	if(n == 0)
	{
		cout << "28tech";
	}
	else
	{
		while(n > 0)
		{
			if((n % 10) % 2 == 0)
			{
				demchan++;
			}
			else
			{
				demle++;
			}
			n /= 10;
		}
			if(demle < demchan)
		{
			cout << "28tech";
		}
		else
		{
			cout << "29tech";
		}
	}
	
	return 0;
}
