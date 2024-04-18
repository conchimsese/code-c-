#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n; cin >> n;
	long long tongchan = 0, tongle = 0;
	if(n % 2)
	{
		tongle = (n + 1)*(n + 1)/4;
		tongchan = (n-1)/2 + (n-1)*(n-1)/4;
	}
	else
	{
		tongle = n*n/4;
		tongchan = n/2 + n*n/4;
	}

	cout << tongchan - tongle;
	return 0;
}
