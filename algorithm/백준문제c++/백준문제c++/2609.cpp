#include <iostream>

using namespace std;

int min(int n, int m)
{
	if (n > m)
	{
		return m;
	}
	else
	{
		return n;
	}
}

int max(int n, int m)
{
	if (n > m)
	{
		return n;
	}
	else
	{
		return m;
	}
}

int main()
{
	int n1, n2, gcd = 1;
	cin >> n1 >> n2;

	for (int i = 2; i <= min(n1,n2) ; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}

	printf("%d\n", gcd);

	for (int j = max(n1,n2) ; j <= n1 * n2 ; j++)
	{
		if (j % n1 == 0 && j % n2 == 0)
		{
			printf("%d", j);
			break;
		}
	}
	return 0;
}