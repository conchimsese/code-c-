#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;
 
bool check(ll n)
{
    ll F[94];
    F[0] = 0, F[1] = 1;
    if(n == 0 || n == 1) return true;
    for(int i = 2 ; i <= 93; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
        if(F[i] == n) return true;
    }
    return false;
}
 
int main()
{
    int n; cin >> n;
    ll a[n];
    for(int i = 0 ; i < n ;i++)
    {
        cin >> a[i];
    }
    bool ok = false; // Quy uoc khong co so fibonacci nao trong mang
    for(int i = 0 ; i < n ;i++)
    {
        if(check(a[i]))
        {
            ok = true; // Mang da co fibonacci
            cout << a[i] << " ";
        }
    }
    if(ok == false) cout << "NONE";
}
