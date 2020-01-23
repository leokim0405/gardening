#include <iostream>

using namespace std;

const double pi = 3.14159265358979323846;

int main()
{
	int R;

	cin >> R;

	double circle, t_circle;

	circle = pi * R * R;
	t_circle = 2 * R * R;

	printf("%lf\n%lf", circle, t_circle);

	return 0;
}