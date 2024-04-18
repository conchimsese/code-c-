#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	char c = 'a';
	for(int i = 0; i < n; i++, c++)
	{
		if(i % 2 != 0)
		{
			c += 32;
			char temp = c;
			for(int j = 0; j < n; j++)
			{
				cout << temp++;
			}
			cout << endl;
		}
		else
		{
			c -= 32;
			char temp = c;
			for(int j = 0; j < n; j++)
			{
				cout << temp++;
			}
			cout << endl;
		}
	}
	return 0;
}
