#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[10000];
	int n = 0;
	int demle = 0, demchan = 0;
	do
	{
		cin >> a[n];
		if(a[n] % 2) demle++;
		else demchan++;
		n++;
	}while(n >= 10000);

	if(demle> demchan) cout << "LE";
	else if(demle < demchan) cout << "CHAN";
	else cout << "CHANLE";
	return 0;
}
