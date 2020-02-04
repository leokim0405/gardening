#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int first, second;
	vector<int> result;

	while (true)
	{
		cin >> first >> second;
		if (first == 0 && second == 0)
		{
			break;
		}

		if (second % first == 0)
		{
			result.push_back(0);
		}
		else if (first % second == 0)
		{
			result.push_back(1);
		}
		else
		{
			result.push_back(2);
		}
	}

	for (auto R : result)
	{
		if (R == 0)
		{
			printf("factor\n");
		}
		else if (R == 1)
		{
			printf("multiple\n");
		}
		else
		{
			printf("neither\n");
		}
	}

	return 0;
}