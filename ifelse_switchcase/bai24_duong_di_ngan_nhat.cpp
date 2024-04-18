#include <iostream>

using namespace std;
int main()
{
	long long d1, d2, d3, choice1, choice2, choice3, min;
	cin >> d1 >> d2 >> d3;
	long long max = (d1 >= d2) ? 1 : 2;
	if(d3 > d1 && d3 > d2)
	{
		max = 3;
	}
	switch(max)
	{
		case 1:
			choice1 = 2*d2 + 2*d3;
			choice2 = d1 + d2 + d3;
			choice3 = 2*d1 + 2*d2;
			min = (choice1 <= choice2) ? choice1 : choice2;
			if(min > choice3)
			{
				min = choice3;
			}
			break;
		
		case 2:
			choice1 = 2*d1 + 2*d3;
			choice2 = d1 + d2 + d3;
			choice3 = 2*d2 + 2*d1;
			min = (choice1 <= choice2) ? choice1 : choice2;
			if(min > choice3)
			{
				min = choice3;
			}
			break;
		case 3:
			choice1 = 2*d1 + 2*d2;
			choice2 = d1 + d3 + d2;
			min = (choice1 <= choice2) ? choice1 : choice2;
			break;

	}
	cout << min;
	return 0;
}
