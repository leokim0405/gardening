#include <iostream>

using namespace std;

int min(int n, int m)
{
	if (n > m)
	{
		return m;
	}
	else
	{
		return n;
	}
}

int main()
{
	int x, y, w, h;

	cin >> x >> y >> w >> h;

	int gap1, gap2;

	gap1 = (h - y);
	gap2 = (w - x);

	cout << min(min(min(x, y), gap1), gap2);

	return 0;
}