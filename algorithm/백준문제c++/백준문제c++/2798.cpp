#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M; // N은 카드 개수 M은 최대한 가까운 수
	int temp, sum;
	vector<int> n_list;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		n_list.push_back(temp);
	}
	sum = 0;

	for (int j = 0; j < n_list.size() - 2; j++)
	{
		for (int k = j+1; k < n_list.size() - 1; k++)
		{
			for (int l = k+1; l < n_list.size(); l++)
			{
				//cout << n_list[j] + n_list[k] + n_list[l] << endl;
				if ( (n_list[j] + n_list[k] + n_list[l] <= M) && (sum < n_list[j] + n_list[k] + n_list[l]) )
				{
					sum = n_list[j] + n_list[k] + n_list[l];
				}
			}
		}
	}
	printf("%d", sum);

	return 0;
}