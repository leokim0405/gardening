#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int a, b, c;
	vector<bool> result;

	while (true)
	{
		cin >> a >> b >> c;
		if ((a == 0) && (b == 0) && (c == 0))
		{
			break;
		}

		if (c * c == (b * b) + (a * a))
		{
			result.push_back(true);
			continue;
		}
		if (b*b == a*a + c*c)
		{
			result.push_back(true);
			continue;
		}
		if (a*a == b*b + c*c)
		{
			result.push_back(true);
			continue;
		}
		result.push_back(false);

	}

	for (auto A : result)
	{
		if (A)
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}

	return 0;
}