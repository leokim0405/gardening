#include <iostream>

using namespace std;

int main()
{
	//A�� ������� B�� ������� C�� ��Ʈ�� ����
	//unsigned long long A, B, C,result;
	int A, B, C;
	int result;
	cin >> A >> B >> C;
	
	if (C-B <= 0 )
	{
		cout << "-1";
	}
	else
	{/*
		for (int i = 1; ; i++)
		{
			if ((C * i) > (A + B * i))
			{
				cout << i;
				break; 
			}
		}*/
		cout << ( A / (C - B) )+ 1;
	}

	return 0;
}