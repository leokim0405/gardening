#include <iostream>
#include <math.h>

using namespace std;

int max_find(int arr[], int N)
{
	int max = arr[0];

	for (int i = 0; i < N ; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	return max;
}

int min_find(int arr[], int N)
{
	int min = arr[0];

	for (int i = 0; i < N; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
}

int main()
{
	int N;
	cin >> N;
	int aliquot[50];

	for (int i = 0; i < N; i++)
	{
		cin >> aliquot[i];
	}
	
	int max, min;

	max = max_find(aliquot, N);
	min = min_find(aliquot, N);

	printf("%d",max * min);

	return 0;
}