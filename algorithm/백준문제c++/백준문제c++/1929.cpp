#include <iostream>
#include <math.h>

using namespace std;

int is_prime(int N)
{
	if(N == 1)
	{
		return 0;
	}

	for (int j = 2; j <= sqrt(N) ; j+=(1+j%2))
	{
		if (N % j == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int M, N;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (is_prime(i))
		{
			printf("%d\n", i);
		}
	}

	return 0;
}