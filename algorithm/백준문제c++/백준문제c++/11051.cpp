#include <iostream>

using namespace std;

const int MAX = 1010;
unsigned long long combination[MAX][MAX];

int main()
{
	unsigned long long N, R;
	cin >> N >> R;

	for (int i = 0; i < 1000; i++)
	{
		for (int j = 0; j < 1000; j++)
		{
			if (j == 0 || i == 0)
			{
				combination[i][j] = 1;
			}
		}
	}

	for (int n = 1; n <= N; n++)
	{
		for (int r = 1; r <= R; r++)
		{
			combination[n][r] = combination[n][r-1] + combination[n-1][r];
			combination[n][r] %= 10007;
		}
	}
	
	cout << combination[N-R][R] % 10007;

	return 0;
}