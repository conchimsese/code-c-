#include <iostream>

using namespace std;
int main()
{
    long long k2, k3, k5, k6, k256, k32;
    cin >> k2 >> k3 >> k5 >> k6;
    k256 = (k2 < k5) ? k2 : k5;
    if(k256 > k6)
    {
        k256 = k6;
    }
    k2 -= k256;
    k32 = (k3 < k2) ? k3 : k2;
    long long result =  k32 * 32 + k256 * 256; 
    cout << result;
    return 0;
}
