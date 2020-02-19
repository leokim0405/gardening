#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	int T;
	cin >> T;

	string S;
	int R;
	vector<string> result;

	int count;
	string temp;
	string result_str;

	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;
		
		for (int j = 0; j < S.length(); j++)
		{
			temp = S[j];
			for (int m = 0; m < R-1; m++)
			{
				temp += S[j];
			}

			if (j == 0)
			{
				result_str = temp;
			}
			else
			{
				result_str += temp;
			}
		}

		result.push_back(result_str);
	}

	for (auto str : result)
	{
		cout << str << '\n';
	}

	return 0;
}