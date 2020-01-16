#include <iostream>
#include <vector>

using namespace std;

int is_prime(int n)
{
	if (n == 1)
	{
		return 0;
	}

	for (int l = 2; l < n; l++)
	{
		if (n % l == 0)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int N,temp,count=0;
	vector<int> list;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		list.push_back(temp);
	}

	for (auto n : list)
	{
		if (is_prime(n))
		{
			count++;
		};
	}

	cout << count;
	return 0;
}