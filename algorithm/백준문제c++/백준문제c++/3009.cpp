#include <iostream>

using namespace std;

int main()
{
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	int xlist[1000] = { 0 };
	int ylist[1000] = { 0 };

	xlist[x1 - 1]++;
	xlist[x2 - 1]++;
	xlist[x3 - 1]++;

	ylist[y1 - 1]++;
	ylist[y2 - 1]++;
	ylist[y3 - 1]++;

	if (xlist[x1 - 1] == 1)
	{
		x4 = x1;
	}
	if (xlist[x2 - 1] == 1)
	{
		x4 = x2;
	}
	if (xlist[x3 - 1] == 1)
	{
		x4 = x3;
	}

	if (ylist[y1 - 1] == 1)
	{
		y4 = y1;
	}
	if (ylist[y2 - 1] == 1)
	{
		y4 = y2;
	}
	if (ylist[y3 - 1] == 1)
	{
		y4 = y3;
	}

	cout << x4 << " " << y4;

	return 0;
}