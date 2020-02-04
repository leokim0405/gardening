#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class spot
{
public:
	spot(int x, int y) : xpos(x), ypos(y) {	}

	void print()
	{
		cout << xpos << " " << ypos << "\n";
	}
	int get_x()
	{
		return xpos;
	}
	int get_y()
	{
		return ypos;
	}

private:
	int xpos;
	int ypos;
};

spot make()
{
	int x, y;
	cin >> x >> y;
	spot point(x, y);

	return point;
}

bool compare(spot &p1, spot &p2)
{
	if (p1.get_y() == p2.get_y())
	{
		return p1.get_x() < p2.get_x();
	}
	return p1.get_y() < p2.get_y();
}

int main()
{
	int N;
	cin >> N;
	vector<spot> result;
	vector<spot> temp;

	for (int i = 0; i < N; i++)
	{
		temp.push_back(make());
	}
	sort(temp.begin(), temp.end(), compare);

	for (auto A : temp)
	{
		A.print();
	}
}