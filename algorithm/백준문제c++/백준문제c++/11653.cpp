#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int temp = N;

	int is_prime = 0;

	vector<int> result;

	for (int i = 2; i < N; )
	{
		if (temp % i == 0)
		{
			result.push_back(i);
			temp /= i;
			is_prime++;
		}
		else
		{
			i++;
		}
	}

	if (!is_prime)
	{
		if (N != 1)
		{
			printf("%d", N);
		}
	}
	else
	{
		for (auto R : result)
		{
			printf("%d\n", R);
		}
	}

	return 0;
}