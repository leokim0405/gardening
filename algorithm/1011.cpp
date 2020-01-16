#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>

using namespace std;


int main()
{
	int T;
	cin >> T;
	vector<int> result;
	int a, b;
	int distance, temp;
	int sq, step, sum;

	for (int B = 0; B < T; B++)
	{
		/*
		int a, b;
		int distance;
		int sq;
		*/
		cin >> a >> b;
		distance = b - a;
		sq = (int)sqrt(distance);

		//int step, sum;
		step = 2 * sq - 1;
		sum = sq * sq;

		/*
		while (distance != sum)
		{
			sum = sum + sq;
			step++;

			if (sum > distance)
			{
				step--;
				sum = sum - sq;
				sq--;
			}
		}*/
		cout << "b" << endl;
		/*temp = (distance - sum) / (sq - 1);
		step += temp;*/
		if (step < 0)
		{
			step = 0;
		}
		cout << "c" << endl;
		result.push_back(step);
	}

	for (auto A : result)
	{
		cout << A << endl;
	}

	return 0;
}