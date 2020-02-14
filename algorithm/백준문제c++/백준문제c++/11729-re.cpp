#include <iostream>

using namespace std;

int count;

void move(int from, int to)
{
	cout << from << " " << to << endl;
}

void hanoi(int n, int from, int mid, int to)
{
	if (n == 1)
		cout << from << " " << to << endl;
	else {
		hanoi(n - 1, from, to, mid);
		move(from, to);
		hanoi(n - 1, mid, from, to);
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;

	count = (1 << n) - 1;
	cout << count << endl;
	hanoi(n, 1, 2, 3);
}
