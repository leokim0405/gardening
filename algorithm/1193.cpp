#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	int line, midterm = 0;
	
	for (int i = 1; ; i++)
	{
		line = i;
		midterm += i;
		if (input <= midterm)
		{
			break;
		}
		
	}
	midterm = 0;
	for (int j = 1; j < line; j++)
	{
		midterm += j;
	}
	
	int mom, son,step;

	step = input - midterm;
	if ((line + 1)%2 == 1) // 분모분자합이 홀수이면
	{
		son = step;
		mom = (line + 1) - son;
	}
	else // 분모분자합이 짝수이면
	{
		mom = step;
		son = (line + 1) - mom;
	}
	cout << son << "/" << mom;
	return 0;
}