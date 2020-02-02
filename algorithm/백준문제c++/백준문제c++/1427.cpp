#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cin >> input;

	char temp;
	int sorting;
	while (true)
	{
		sorting = 0;
		for (int i = 0; i < input.length() - 1; i++)
		{

			if (input[i] < input[i + 1])
			{
				temp = input[i];
				input[i] = input[i + 1];
				input[i + 1] = temp;
				sorting++;
			}
		}
		if (sorting == 0)
		{
			break;
		}
	}

	cout << input;
	return 0;
}