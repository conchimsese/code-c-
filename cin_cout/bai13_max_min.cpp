#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	long long x, y, z, t;
	cin >> x; 
	cin >> y; 
	cin >> z; 
	cin >> t;
	cout << max(x, y) << endl << min(z, t) << endl << max({x, y, z}) << endl << min({x, y, z, t});
	return 0;
}
