#include <iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		for(int j = 1; j <= 4*n - 3; j++)
		{
			if(j >= (((4*n -3)+1)/2) - 2*i && j <= (((4*n -3)+1)/2) + 2*i)
			{
				if(j % 2 != 0)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}	
			else
			{
				cout << " ";
			}
		}
		cout << endl;	
	}
	return 0;
}
