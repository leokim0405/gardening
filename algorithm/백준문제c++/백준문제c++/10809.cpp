#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S;
	cin >> S;
	int ad;

	for (int i = 'a'; i <= 'z'; i++)
	{
		ad = -1;
		for (int j = 0 ; j < S.length() ; j++)
		{
			if (S[j] == i)
			{
				ad = j;
				break;
			}
		}
		printf("%d ", ad);
	}
	return 0;
}