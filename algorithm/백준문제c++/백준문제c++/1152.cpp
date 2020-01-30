#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	getline(cin, input);

	int count = 1;

	for (auto word : input)
	{
		if (word == ' ')
		{
			count++;
		}
	}
	
	if (input[0] == ' ' && input.length() == 1)
	{
		count = 0;
	}
	else
	{
		if (input[0] == ' ' && input[1] != ' ')
		{
			count--;
		}
		if (input[input.length() - 1] == ' ' && input[input.length() - 2])
		{
			count--;
		}
	}
	printf("%d", count);

	return 0;
}