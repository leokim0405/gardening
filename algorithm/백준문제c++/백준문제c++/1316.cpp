#include <iostream>
#include <string>

using namespace std;

bool is_group(string str)
{
	bool result = true;
	string temp;
	temp.push_back(str[0]);

	for (int s1 = 1; s1 < str.length(); s1++)
	{
		if (str[s1] != str[s1-1])
		{
			temp.push_back(str[s1]);
		}
	}

	int counting;

	for (auto s2 : temp)
	{
		counting = 0;
		for (auto s3 : temp)
		{
			if (s3 == s2)
			{
				counting++;
			}
		}
		if (counting > 1)
		{
			result = false;
			break;
		}
	}

	return result;
}

int main()
{
	int N;
	cin >> N;
	string list[100];
	string temp_str;
	int count = 0;
	
	for (int i = 0; i < N; i++)
	{
		cin >> temp_str;
		list[i] = temp_str;
	}
	
	for (int j = 0; j < N; j++)
	{
		if (is_group(list[j]))
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}
