#include <iostream>

using namespace std;
/*
int ciper(int n)  // 자릿수 출력하는 함수
{
	int ciper = 1 ;
	for (int i = 10; ; i = i * 10)
	{
		if (n / i == 0)
		{
			break;
		}
		else
		{
			ciper++;
		}
	}
	return ciper;
}
*/
int disassemble(int n)
{
	int result  = n;
	int temp = n;
	if (n / 10 == 0)
	{
		return result;
	}
	for (int i = 0; ; i++)
	{
		result += temp % 10;
		temp /= 10;
		if (temp == 0)
		{
			break;
		}
	}

	return result;
}

int main()
{
	int N;
	cin >> N;
	
	int result = 0;

	for (int j = N - 1; j > 0; j--)
	{
		if (disassemble(j) == N)
		{
			result = j;
		}
	}

	cout << result;

	return 0;
}