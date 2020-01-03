#include <iostream>
#include <vector>

using namespace std;

int calculate_people(int k, int n);

int main()
{
	int test_case_n, floor_n, room_n;
	int count;
	vector<int> list;

	cin >> test_case_n;

	for (int i = test_case_n; i > 0; i--)
	{
		cin >> floor_n;
		cin >> room_n;

		count = calculate_people(floor_n, room_n);
		list.push_back(count);
	}

	for (auto N : list)
	{
		cout << N << endl;
	}


	return 0;
}

int calculate_people(int k, int n)
{
	int result = 0;
	if (k == 0)
	{
		result = n;
	}
	else
	{
		for (int b = 1; b < n + 1; b++)
		{
			result += calculate_people(k - 1, b);
		}
	}

	return result;
}