#include <bits/stdc++.h>
using namespace std;
void xoa(int a[], int &n, int k)
{
    int check = 0;
    for(int i = 0; i < n; i++)
    {
        if(k == a[i])
        {
            check = 1;
            for(int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            break;
        }
    }
    if(!check) cout << "NOT FOUND";
    else
    {
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}
int main()
{
    int n, k; cin >> n >> k;
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        
    }
    xoa(a, n, k);
    return 0;
}
