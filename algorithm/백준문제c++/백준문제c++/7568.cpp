#include <iostream>

using namespace std;


int main()
{
	int N;
	cin >> N;

	int height[49] = { 0 };
	int weight[49] = { 0 };
	int count[49] = { 0 };

	for (int i = 0; i < N; i++)
	{
		cin >> weight[i] >> height[i];
	}

	for (int j = 0; j < N; j++)
	{
		for (int k = 0; k < N; k++)
		{
			if (weight[j] < weight[k] && height[j] < height[k])
			{
				count[j]++;
			}
		}
	}

	for (int l = 0; l < N; l++)
	{
		printf("%d ", count[l] + 1);
	}

	return 0;
}