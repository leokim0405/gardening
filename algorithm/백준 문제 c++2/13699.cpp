#include <iostream>

using namespace std;

/*
long long t(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		long long temp = 0;
		for (int i = 0; i < n ; i++)
		{
			temp += t(i)*t(n - i - 1);
		}
		return temp;
	}
}*/

int main()
{
	int n;
	cin >> n;

	//cout << t(n);

	long long t[35] = { 1,0, };
	//long long temp;
	
	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			t[i] += t[j] * t[i - j - 1];
		}
	}

	cout << t[n];
	return 0;
}