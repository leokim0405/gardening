#include <iostream>

using namespace std;

int main()
{
	unsigned long long N, M, tempN, tempM;
	cin >> N >> M;

	if (N < M * 2)
	{
		M = N - M;
	}

	int count2 = 0, count5 = 0;

	for (int i = 0; i < M; i++)
	{
		tempN = N;
		while (true)
		{
			if (tempN % 5 == 0)
			{
				count5++;
				tempN /= 5;
			}
			else if (tempN % 2 == 0)
			{
				count2++;
				tempN /= 2;
			}
			else
			{
				break;
			}
		}
		N--;
	}

	for (int j = 0; j < M; j++)
	{
		tempM = M;
		while (true)
		{
			if (tempM % 5 == 0)
			{
				count5--;
				tempM /= 5;
			}
			else if (tempM % 2 == 0)
			{
				count2--;
				tempM /= 2;
			}
			else
			{
				break;
			}
		}
		M--;
	}

	if (count5 * count2 == 0)
	{
		printf("%d", 0);
	}
	else if (count2 > count5)
	{
		printf("%d",count5);
	}
	else
	{
		printf("%d",count2);
	}

	return 0;
}