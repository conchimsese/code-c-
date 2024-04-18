#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while(b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++)
	{
		for(int j = i + 1; j <= b; j++)
		{
			if(gcd(i, j) == 1)
			{
				cout << "(" << i << "," << j << ")" << endl;
			}
		}
	}
	return 0;
}
