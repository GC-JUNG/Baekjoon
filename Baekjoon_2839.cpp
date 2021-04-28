#include <iostream>
using namespace std;

int main()
{
	int N, i;
	int sum = 0;

	cin >> N;
	for (i = 0; i < 5; i++)
	{
		if (N % 5 == 0 || N <= 0)
			break;
		N -= 3;
	}

	sum += i + N / 5;

	if (N % 5 != 0)
		cout << -1 << endl;
	else
		cout << sum << endl;

	return 0;
}