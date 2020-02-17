#include <iostream>
#include <string>

using namespace std;

int main()
{
	string order;
	cin >> order;

	int time = 0;

	for (int i = 0; i < order.length(); i++)
	{
		if (order[i] == '1')
		{
			time += 2;
		}
		else if (order[i] >= 'A' && order[i] <= 'C')
		{
			time += 3;
		}
		else if (order[i] >= 'D' && order[i] <='F')
		{
			time += 4;
		}
		else if (order[i] >= 'G' && order[i] <= 'I')
		{
			time += 5;
		}
		else if (order[i] >= 'J' && order[i] <= 'L')
		{
			time += 6;
		}
		else if (order[i] >= 'M' && order[i] <= 'O')
		{
			time += 7;
		}
		else if (order[i] >= 'P' && order[i] <= 'S')
		{
			time += 8;
		}
		else if (order[i] >= 'T' && order[i] <= 'V')
		{
			time += 9;
		}
		else if (order[i] >= 'W' && order[i] <= 'Z')
		{
			time += 10;
		}
		else
		{
			time += 11;
		}
	}

	printf("%d", time);

	return 0;
}