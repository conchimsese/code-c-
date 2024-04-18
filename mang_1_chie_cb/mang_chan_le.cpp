#include <bits/stdc++.h>
using namespace std;

int main()
{
	int demchan = 0, demle = 0;
	int n;
	while(cin >> n)
	{
		if(n % 2 == 0) demchan++;
		else demle++;
	}
	if(demchan > demle) cout << "CHAN";
	else if(demle > demchan) cout << "LE";
	else cout << "CHANLE";
	return 0;
}
