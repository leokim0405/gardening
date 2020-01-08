#include <iostream>
#include <vector>

using namespace std;

int isprime(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i < n; i++)
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
	int N, M;
	vector<int> result;

	cin >> N;
	cin >> M;

	for (int j = N; j <= M; j++)
	{
		if (isprime(j))
		{
			result.push_back(j);
		}
	}

	if (!result.size())
	{
		cout << "-1";
	}
	else
	{
		int sum = 0;
		for (int k = 0; k < result.size(); k++)
		{
			sum += result[k];
		}
		cout << sum << endl;
		cout << result[0];
	}
	/*
	int input;
	cin >> input;

	cout << isprime(input);
	*/
	return 0;
}