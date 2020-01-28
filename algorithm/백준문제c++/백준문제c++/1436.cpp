#include <iostream>
#include <string>

using namespace std;

bool find666(int n)
{
	string str;
	str = to_string(n);

	for (int j = 0; j < str.length() - 2; j++)
	{
		if (str[j] == '6' && str[j+1] == '6' && str[j+2] == '6')
		{
			return true;
		}
	}

	return false;
}

int main()
{
	int N;
	cin >> N;
	int count = 0;
	int result;
	
	for (int i = 666; ; i++)
	{
		if (count == N)
		{
			break;
		}
		if (find666(i))
		{
			result = i;
			count++;
		}
	}

	printf("%d", result);

	return 0;
}