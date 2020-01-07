#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> result;
	int temp= -1,temp2 = N, temp3 = 0;

	for (int i = 0; ; i++)
	{
		N = temp2 - 3 * i;
		if (N <= 0) // N이 0보다 작거나 같아지면
		{
			break;
		}
		result.push_back(N);
	}

	for (int j = 0 ; j < result.size() ; j++)
	{
		if (result[j] % 5 == 0)
		{
			temp++;
			temp3 += result[j] / 5 + j;
			break;
		}
	}
	/*
	for (auto Q : result)
	{
		cout << "result " << Q << endl;
	}

	cout << "N is " << N << endl;
	*/
	if ((temp == -1) && (N == 0))
	{
		temp++;
		temp3 = result.size();
		//cout << "result.size() act" << endl;
	}
	if (temp == -1)
	{
		cout << temp;
	}
	else
	{
		cout << temp3;
	}
	return 0;
}