#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alphabet[26] = { 0, };

	string word;
	cin >> word;
	
	for (auto w : word)
	{
		if (w == 'A' || w == 'a')
		{
			alphabet[0]++;
		}
		else if (w == 'B' || w == 'b')
		{
			alphabet[1]++;
		}
		else if (w == 'c' || w== 'C')
		{
			alphabet[2]++;
		}
		else if (w == 'd' || w == 'D')
		{
			alphabet[3]++;
		}
		else if (w == 'E' || w == 'e')
		{
			alphabet[4]++;
		}
		else if (w == 'F' || w == 'f')
		{
			alphabet[5]++;
		}
		else if (w == 'G' || w == 'g')
		{
			alphabet[6]++;
		}
		else if (w == 'H' || w == 'h')
		{
			alphabet[7]++;
		}
		else if (w == 'I' || w == 'i')
		{
			alphabet[8]++;
		}
		else if (w == 'J' || w == 'j')
		{
			alphabet[9]++;
		}
		else if (w == 'K' || w == 'k')
		{
			alphabet[10]++;
		}
		else if (w == 'L' || w == 'l')
		{
			alphabet[11]++;
		}
		else if (w == 'M' || w == 'm')
		{
			alphabet[12]++;
		}
		else if (w == 'N' || w == 'n')
		{
			alphabet[13]++;
		}
		else if (w == 'O' || w == 'o')
		{
			alphabet[14]++;
		}
		else if (w == 'P' || w == 'p')
		{
			alphabet[15]++;
		}
		else if (w == 'Q' || w == 'q')
		{
			alphabet[16]++;
		}
		else if (w == 'R' || w == 'r')
		{
			alphabet[17]++;
		}
		else if (w == 'S' || w == 's')
		{
			alphabet[18]++;
		}
		else if (w == 'T' || w == 't')
		{
			alphabet[19]++;
		}
		else if (w == 'U' || w == 'u')
		{
			alphabet[20]++;
		}
		else if (w == 'V' || w == 'v')
		{
			alphabet[21]++;
		}
		else if (w == 'W' || w == 'w')
		{
			alphabet[22]++;
		}
		else if (w == 'X' || w == 'x')
		{
			alphabet[23]++;
		}
		else if (w == 'Y' || w == 'y')
		{
			alphabet[24]++;
		}
		else
		{
			alphabet[25]++;
		}
	}

	int max = 0;

	for (int i = 0 ; i < 26 ; i++)
	{
		if (alphabet[max] < alphabet[i])
		{
			max = i;
		}
	}

	int okay = 0;

	for (int j = 0 ; j < 26 ; j++)
	{
		if (alphabet[j] == alphabet[max])
		{
			okay++;
		}
	}

	if (okay > 1)
	{
		printf("?");
	}
	else
	{
		printf("%c", max + 65);
	}

	return 0;
}