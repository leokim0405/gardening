#include <iostream>

using namespace std;


void hanoi(int a, int b, int c);

int main()
{
	int N, count = 1;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		count *= 2;
	}
	printf("%d", count + 1);
	hanoi(N, 0, 0);

	return 0;
}

void hanoi(int a, int b, int c)
{

	if (a == 1 && b == 0)
	{
		printf("1 3");
	}
	else if (a == 0 && b == 1)
	{
		printf("2 3");
	}
	else
	{
		hanoi(a - 1, 1, 0);
	}
}