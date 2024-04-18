#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n];
	long long demle = 0, demchan = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i] % 2) demle++;
		else demchan++;
	}
	cout << (demchan*(demchan-1)) / 2 + (demle*(demle - 1))/2;
	return 0;
}
