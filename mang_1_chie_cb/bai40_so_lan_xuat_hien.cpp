#include <bits/stdc++.h>
using namespace std;
long long cnt[10];
void phantich(long long n)
{
    if(n == 0) cnt[0]++;
    else
    {
  	 	n = abs(n);
   		while(n)
   		{
    	    cnt[n%10]++;
   	    	n /= 10;
   		}
    }
}
int main()
{
    int n;
    cin >> n;
    long long a[1000000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        phantich(a[i]);
    }
    for(int i = 0; i < 10; i++)
    {
        if(cnt[i]) cout << i << " " << cnt[i] << endl;
    }
    return 0;
}
