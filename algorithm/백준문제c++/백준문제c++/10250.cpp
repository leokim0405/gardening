#include <iostream>
#include <vector>

using namespace std;

int findRoom(int H, int W, int N)
{
	int floor, room;

	for (int j = 1; j <= W; j++)
	{
		if (N <= H * j)
		{
			room = j;
			break;
		}
	}
	floor = N - (H * (room - 1));


	return 100 * floor + room;
}

int main()
{
	int T;
	vector<int> result;
	cin >> T;

	int H, W, N; //H는 층수, W는 각층의 방수, N은 몇번째 손님
	

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		result.push_back(findRoom(H, W, N));
	}
	
	for (auto A : result)
	{
		cout << A << endl;
	}
	return 0;
}