#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
	int T;
	vector<int> result;
	cin >> T;

	int x1, y1, x2, y2;
	unsigned int r1, r2,count;
	double distance;

	for (int i = 0; i < T; i++)
	{
		count = 0;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		distance = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

		if (x1 == x2 && y1 == y2 && r1 == r2)
		{
			result.push_back(-1);
		}
		else if ( (distance > (r1 + r2) * (r1 + r2)) || (distance < (r1 - r2) * (r1 - r2)) )
		{
			result.push_back(0);
		}
		else if ( (distance == (r1 + r2) * (r1 + r2)) || (distance == (r1 - r2) * (r1 - r2) ) )
		{
			result.push_back(1);
		}
		else
		{
			result.push_back(2);
		}
	}

	for (auto r : result)
	{
		printf("%d\n", r);
	}

	return 0;
}