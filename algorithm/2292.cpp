#include <iostream>

using namespace std;

int main()
{
	int input;
	cin >> input;

	//1 6 12 18
	int temp = input - 1, step = 1;

	
	for (int i = 1; temp > 0 ; i++)
	{
		temp = temp - i * 6;
		step++;
	}

	if (input == 1)
	{
		step = 1;
	}

	cout << step;
	return 0;
}