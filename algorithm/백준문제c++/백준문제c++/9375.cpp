#include <iostream>
#include <string>

using namespace std;

int main()
{
	int test_case;
	cin >> test_case;

	int result[100] = { 0 };
	string clothes[30];
	int cloth_n;

	for (int i = 0; i < test_case; i++)
	{
		cin >> cloth_n;

		for (int j = 0; j < cloth_n; j++)
		{
			cin >> clothes[j];
		}



		result[i];
	}



	for (int R = 0; R < test_case; R++)
	{
		printf("%d\n", result[R]);
	}

	return 0;
}