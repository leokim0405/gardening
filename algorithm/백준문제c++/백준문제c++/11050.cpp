#include <iostream>

using namespace std;

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
	int N, R, result;

	cin >> N >> R;

	result = factorial(N) / (factorial(R) * factorial(N - R));

	cout << result;

	return 0;
}