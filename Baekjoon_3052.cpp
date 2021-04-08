#include<iostream>

using namespace std;

int main()
{
	int a, cnt = 0;
	int	num[42] = {0,};

	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		num[a % 42] = 1;
	}

	for (int i = 0; i < 42; i++)
	{
		if (num[i] == 1)cnt++;
	}

	cout << cnt;

	return 0;
}
