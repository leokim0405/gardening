#include <iostream>
#include <string>

using namespace std;

int main()
{
	string order;
	cin >> order;

	int small_ball = 1, big_ball = 4;

	for (int i = 0; i < order.length(); i++)
	{
		if (order[i] == 'A')
		{
			if (small_ball == 1)
			{
				small_ball = 2;
			}
			else if (small_ball == 2)
			{
				small_ball = 1;
			}
			if (big_ball == 1)
			{
				big_ball = 2;
			}
			else if (big_ball == 2)
			{
				big_ball = 1;
			}
		}
		else if (order[i] == 'B')
		{
			if (small_ball == 1)
			{
				small_ball = 3;
			}
			else if (small_ball == 3)
			{
				small_ball = 1;
			}
			if (big_ball == 1)
			{
				big_ball = 3;
			}
			else if (big_ball == 3)
			{
				big_ball = 1;
			}
		}
		else if (order[i] == 'B')
		{
			if (small_ball == 1)
			{
				small_ball = 2;
			}
			else if (small_ball == 2)
			{
				small_ball = 1;
			}
			if (big_ball == 1)
			{
				big_ball = 2;
			}
			else if (big_ball == 2)
			{
				big_ball = 1;
			}
		}
		else if (order[i] == 'C')
		{
			if (small_ball == 1)
			{
				small_ball = 4;
			}
			else if (small_ball == 4)
			{
				small_ball = 1;
			}
			if (big_ball == 1)
			{
				big_ball = 4;
			}
			else if (big_ball == 4)
			{
				big_ball = 1;
			}
		}
		else if (order[i] == 'D')
		{
			if (small_ball == 3)
			{
				small_ball = 2;
			}
			else if (small_ball == 2)
			{
				small_ball = 3;
			}
			if (big_ball == 3)
			{
				big_ball = 2;
			}
			else if (big_ball == 2)
			{
				big_ball = 3;
			}
		}
		else if (order[i] == 'E')
		{
			if (small_ball == 2)
			{
				small_ball = 4;
			}
			else if (small_ball == 4)
			{
				small_ball = 2;
			}
			if (big_ball == 2)
			{
				big_ball = 4;
			}
			else if (big_ball == 4)
			{
				big_ball = 2;
			}
		}
		else if (order[i] == 'F')
		{
			if (small_ball == 3)
			{
				small_ball = 4;
			}
			else if (small_ball == 4)
			{
				small_ball = 3;
			}
			if (big_ball == 3)
			{
				big_ball = 4;
			}
			else if (big_ball == 4)
			{
				big_ball = 3;
			}
		}
	}

	cout << small_ball << "\n" << big_ball;

	return 0;
}