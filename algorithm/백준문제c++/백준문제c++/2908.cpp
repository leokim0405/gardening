#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number1, number2;
	cin >> number1 >> number2;
	int which_number;

	for (int i = number1.length()-1; i >= 0 ; i--)
	{
		if (number1[i] > number2[i])
		{
			which_number = 1;
			break;
		}
		else if (number1[i] < number2[i])
		{
			which_number = 2;
			break;
		}
	}

	for (int j = number1.length() - 1; j >= 0; j--)
	{
		if (which_number == 1)
		{
			cout << number1[j];
		}
		else
		{
			cout << number2[j];
		}
	}
	return 0;
}