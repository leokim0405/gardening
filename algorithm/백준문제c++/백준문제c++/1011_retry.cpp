#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	int T;
	vector<int> result;
	int a, b, distance;
	int sq,step;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		distance = b - a;
		sq = sqrt(distance);
		step = 2 * sq - 1;
		if (sq == 1)
		{
			step = distance / 1;
		}
		else
		{
			if ((distance - (sq*sq)) % (sq) == 0)
			{
				step += (distance - (sq*sq)) / (sq);
			}
			else
			{
				step +=( (distance - (sq*sq)) / (sq) )+ 1;
			}
		}
		result.push_back(step);
	}

	for (auto K : result)
	{
		cout << K << endl;
	}
	return 0;
}