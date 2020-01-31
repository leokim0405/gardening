#include <iostream>

using namespace std;


int main()
{
	int N;
	cin >> N;

	int numbers[1000];
	bool is_sorted = false;
	int temp;
	int sorting = 0;

	for (int  i = 0; i < N; i++)
	{
		cin >> numbers[i];
	}

	while (!is_sorted)
	{
		sorting = 0;
		for (int j = 0; j < N-1; j++)
		{
			if (numbers[j] > numbers[j + 1])
			{
				temp = numbers[j];
				numbers[j] = numbers[j + 1];
				numbers[j + 1] = temp;
				sorting++;
			}
		}
		if (sorting)
		{
			continue;
		}
		is_sorted = true;
	}

	for (int l = 0 ; l < N ; l++)
	{
		printf("%d\n", numbers[l]);
	}

	return 0;
}