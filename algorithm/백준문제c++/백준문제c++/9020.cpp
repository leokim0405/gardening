#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int is_prime(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int T;
	cin >> T;

	int n, n1, n2;
	vector<int> result1;
	vector<int> result2;

	for(int i = 0 ; i < T ; i++)
	{
		cin >> n;
		for (int k = 2; k < n; k++)
		{
			if (k > n - k)
			{
				break;
			}
			if ( (is_prime(k) ) && (is_prime(n - k)) )
			{
				n1 = k;
				n2 = n - k;
			}
		}
		result1.push_back(n1);
		result2.push_back(n2);
	}


	for (int j = 0; j < result1.size() ; j++)
	{
		printf("%d %d\n", result1[j], result2[j]);
	}

	return 0;
}