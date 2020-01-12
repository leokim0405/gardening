#include <iostream>
using namespace std;

int main()
{
	unsigned long long N, A, B, date;

	cin >> A >> B >> N;

	int gap = A - B;
	int end = N -A;
	
	date = end / gap + 1;
	
	if( (end / gap) * gap < end )
	{
		date++;
	}

	cout << date;

	return 0;
}