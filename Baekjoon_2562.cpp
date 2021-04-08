#include<iostream>
using namespace std;

int main()
{
	int num, N;
	int max = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		if (num > max)
		{
			max = num;
			N = i+1;
		}


	}
	cout << max << endl << N;
	return 0;
}
