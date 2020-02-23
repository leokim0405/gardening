#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	cin >> str;

	int count = str.size();

	if (str.size() == 1)
	{
		printf("%d", count);
	}
	else
	{
		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] == 'c')
			{
				if (str[i + 1] == '=' || str[i + 1] == '-')
				{
					count--;
				}
			}
			if (str[i] == 'd' && str[i + 1] == '-')
			{
				count--;
			}
			if (str[i] == 'l' && str[i + 1] == 'j')
			{
				count--;
			}
			if (str[i] == 'n' && str[i + 1] == 'j')
			{
				count--;
			}
			if (str[i] == 's' && str[i + 1] == '=')
			{
				count--;
			}
			if (str[i] == 'z' && str[i + 1] == '=')
			{
				count--;
			}
		}
		if (str.size() >= 2)
		{
			for (int j = 0; j < str.size() - 2; j++)
			{
				if (str[j] == 'd' && str[j + 1] == 'z' && str[j + 2] == '=')
				{
					count--;
				}
			}
		}
		printf("%d", count);
	}
	

	return 0;
}