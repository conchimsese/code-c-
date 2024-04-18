#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
    	if(i == 0)
    	{
    		for(int j = 0; j < n; j++)
    		{
    			int x; cin >> x;
    			mp[x] = 1;
			}
		}
		else
		{
			for(int j = 0; j < n; j++)
			{
				int x; cin >> x;
				if(mp[x] == i) mp[x]++;
			}
		}
	}
	int check = 0;
	for(auto x : mp)
	{
		if(x.second == n)
		{
			check = 1;
			cout << x.first << " ";
		}
		
	}
	if(check == 0) cout << "NOT FOUND";
    return 0;
}
