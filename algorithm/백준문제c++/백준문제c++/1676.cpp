#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int temp;
	int count5 = 0, count2 = 0;

	for (int i = 1; i <= N; i++)
	{
		temp = i;
		while (true)
		{
			if (temp % 5 == 0)
			{
				count5++;
				temp /= 5;
			}
			else if (temp % 2 == 0)
			{
				count2++;
				temp /= 2;
			}
			else
			{
				break;
			}
		}
	}
	
	if (count2 == 0 || count5 == 0)
	{
		printf("%d", 0);
	}
	else if (count5 > count2)
	{
		printf("%d", count2);
	}
	else
	{
		printf("%d", count5);
	}

	return 0;
}