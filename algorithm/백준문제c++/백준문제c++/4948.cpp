#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int is_prime(int n)
{
	if (n == 1)
	{
		return 0;
	}

	for (int j = 2; j <= sqrt(n); j += (1 + j % 2))
	{
		if (n % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int N, count;
	vector<int> result;

	while (true)
	{
		scanf_s("%d", &N);
		if (N == 0)
		{
			break;
		}
		count = 0;
		for (int j = N + 1; j <= 2 * N; j++)
		{
			if (is_prime(j))
			{
				count++;
			}
		}
		result.push_back(count);
	}

	for (auto A : result)
	{
		printf("%d\n", A);
	}
	return 0;
}